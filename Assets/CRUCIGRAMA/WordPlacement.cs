public class WordPlacement
{
    public string Word { get; set; }
    public string Clue { get; set; }
    public int Row { get; set; }
    public int Col { get; set; }
    public bool IsHorizontal { get; set; }
    public bool Placed { get; set; }

    public WordPlacement(string word, string clue, int row, int col, bool isHorizontal)
    {
        Word = word;
        Clue = clue;
        Row = row;
        Col = col;
        IsHorizontal = isHorizontal;
        Placed = false;
    }

    public WordPlacement()
    {
        Word = "";
        Clue = "";
        Row = -1;
        Col = -1;
        IsHorizontal = false;
        Placed = false;
    }
} 