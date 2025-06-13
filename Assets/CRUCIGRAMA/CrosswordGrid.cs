using System;

public class CrosswordGrid
{
    private int rows_;
    private int cols_;
    private char empty_char_;
    private char[,] grid_;

    public CrosswordGrid(int rows, int cols, char emptyChar = ' ')
    {
        rows_ = rows;
        cols_ = cols;
        empty_char_ = emptyChar;
        grid_ = new char[rows_, cols_];
        for (int r = 0; r < rows_; r++)
            for (int c = 0; c < cols_; c++)
                grid_[r, c] = empty_char_;
    }

    public CrosswordGrid(CrosswordGrid other)
    {
        rows_ = other.rows_;
        cols_ = other.cols_;
        empty_char_ = other.empty_char_;
        grid_ = new char[rows_, cols_];
        Array.Copy(other.grid_, grid_, other.grid_.Length);
    }

    public bool CanPlaceWord(WordPlacement wp)
    {
        if (wp.IsHorizontal)
        {
            if (wp.Col < 0 || wp.Col + wp.Word.Length > cols_ || wp.Row < 0 || wp.Row >= rows_)
                return false;
        }
        else
        {
            if (wp.Row < 0 || wp.Row + wp.Word.Length > rows_ || wp.Col < 0 || wp.Col >= cols_)
                return false;
        }
        for (int i = 0; i < wp.Word.Length; ++i)
        {
            int r = wp.IsHorizontal ? wp.Row : wp.Row + i;
            int c = wp.IsHorizontal ? wp.Col + i : wp.Col;
            char gridChar = grid_[r, c];
            char wordChar = wp.Word[i];
            if (gridChar != empty_char_ && gridChar != wordChar)
                return false;
            if (gridChar == empty_char_)
            {
                if (i == 0)
                {
                    if (wp.IsHorizontal)
                    {
                        if (c > 0 && grid_[r, c - 1] != empty_char_) return false;
                    }
                    else
                    {
                        if (r > 0 && grid_[r - 1, c] != empty_char_) return false;
                    }
                }
                if (i == wp.Word.Length - 1)
                {
                    if (wp.IsHorizontal)
                    {
                        if (c + 1 < cols_ && grid_[r, c + 1] != empty_char_) return false;
                    }
                    else
                    {
                        if (r + 1 < rows_ && grid_[r + 1, c] != empty_char_) return false;
                    }
                }
                if (wp.IsHorizontal)
                {
                    if (r > 0 && grid_[r - 1, c] != empty_char_) return false;
                    if (r + 1 < rows_ && grid_[r + 1, c] != empty_char_) return false;
                }
                else
                {
                    if (c > 0 && grid_[r, c - 1] != empty_char_) return false;
                    if (c + 1 < cols_ && grid_[r, c + 1] != empty_char_) return false;
                }
            }
        }
        return true;
    }

    public void PlaceWord(WordPlacement wp)
    {
        for (int i = 0; i < wp.Word.Length; ++i)
        {
            int r = wp.IsHorizontal ? wp.Row : wp.Row + i;
            int c = wp.IsHorizontal ? wp.Col + i : wp.Col;
            grid_[r, c] = wp.Word[i];
        }
    }

    public char GetChar(int r, int c)
    {
        if (r >= 0 && r < rows_ && c >= 0 && c < cols_)
            return grid_[r, c];
        return empty_char_;
    }

    public int GetRows() { return rows_; }
    public int GetCols() { return cols_; }
    public char GetEmptyChar() { return empty_char_; }
} 