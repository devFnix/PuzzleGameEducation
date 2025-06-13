using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class CrosswordGenerator
{
    private System.Random random = new System.Random();

    public List<WordPlacement> GenerateCrossword(List<Tuple<string, string>> wordsAndClues, CrosswordGrid grid)
    {
        var placedWords = new List<WordPlacement>();
        if (wordsAndClues == null || wordsAndClues.Count == 0) return placedWords;

        var wordsToPlace = wordsAndClues.Select(t => new Tuple<string, string>(t.Item1.ToUpper(), t.Item2))
                                        .OrderByDescending(t => t.Item1.Length)
                                        .ToList();
        
        // Colocar la primera palabra
        var firstWordTuple = wordsToPlace.First();
        wordsToPlace.RemoveAt(0);
        PlaceFirstWord(firstWordTuple, grid, placedWords);

        // Intentar colocar el resto de las palabras
        int attempts = 0;
        while (wordsToPlace.Count > 0 && attempts < 100)
        {
            var wordTuple = wordsToPlace[0];
            wordsToPlace.RemoveAt(0);

            var bestPlacement = FindBestPlacementFor(wordTuple, grid);
            if (bestPlacement != null)
            {
                grid.PlaceWord(bestPlacement);
                placedWords.Add(bestPlacement);
            }
            else
            {
                Debug.LogWarning($"No se pudo colocar la palabra: '{wordTuple.Item1}'.");
            }
            attempts++;
        }

        return placedWords;
    }

    private void PlaceFirstWord(Tuple<string, string> wordTuple, CrosswordGrid grid, List<WordPlacement> placedWords)
    {
        bool isHorizontal = random.Next(2) == 0;
        int row = isHorizontal ? grid.GetRows() / 2 : (grid.GetRows() - wordTuple.Item1.Length) / 2;
        int col = isHorizontal ? (grid.GetCols() - wordTuple.Item1.Length) / 2 : grid.GetCols() / 2;
        
        var placement = new WordPlacement(wordTuple.Item1, wordTuple.Item2, row, col, isHorizontal);
        
        if (grid.CanPlaceWord(placement))
        {
            grid.PlaceWord(placement);
            placedWords.Add(placement);
        }
        else
        {
             Debug.LogError($"La palabra más larga '{wordTuple.Item1}' no cabe en la cuadrícula. Aumenta el tamaño.");
        }
    }

    private WordPlacement FindBestPlacementFor(Tuple<string, string> wordTuple, CrosswordGrid grid)
    {
        WordPlacement bestPlacement = null;
        int maxIntersections = -1; // Empezar en -1 para aceptar posiciones con 0 intersecciones

        for (int r = 0; r < grid.GetRows(); r++)
        {
            for (int c = 0; c < grid.GetCols(); c++)
            {
                // Intentar horizontal
                var hPlacement = new WordPlacement(wordTuple.Item1, wordTuple.Item2, r, c, true);
                if (grid.CanPlaceWord(hPlacement))
                {
                    int intersections = CalculateIntersections(grid, hPlacement);
                    if (intersections > maxIntersections)
                    {
                        maxIntersections = intersections;
                        bestPlacement = hPlacement;
                    }
                }

                // Intentar vertical
                var vPlacement = new WordPlacement(wordTuple.Item1, wordTuple.Item2, r, c, false);
                if (grid.CanPlaceWord(vPlacement))
                {
                    int intersections = CalculateIntersections(grid, vPlacement);
                    if (intersections > maxIntersections)
                    {
                        maxIntersections = intersections;
                        bestPlacement = vPlacement;
                    }
                }
            }
        }
        return bestPlacement;
    }

    private int CalculateIntersections(CrosswordGrid currentGrid, WordPlacement wp)
    {
        int intersections = 0;
        for (int i = 0; i < wp.Word.Length; i++)
        {
            int r = wp.IsHorizontal ? wp.Row : wp.Row + i;
            int c = wp.IsHorizontal ? wp.Col + i : wp.Col;
            if (currentGrid.GetChar(r, c) == wp.Word[i])
            {
                intersections++;
            }
        }
        return intersections;
    }
} 