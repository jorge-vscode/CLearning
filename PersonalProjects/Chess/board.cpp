#include <array>
#include <iostream>
class Board
{
private:
    bool turn;
    std::array<std::array<char, 8>, 8> currentBoard;
    std::string currentBoardFEN;
    Board(bool turn, char currentBoard[8][8])
    {
        this->turn = turn;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                this->currentBoard[i][j] = currentBoard[i][j];
            }
        }
    }
    void setTurn(bool turn)
    {
        this->turn = turn;
    }
    void setCurrentBoard(char currentBoard[8][8])
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                this->currentBoard[i][j] = currentBoard[i][j];
            }
        }
    }
    void setCurrentBoardFEN(std::string currentBoardFEN)
    {
        this->currentBoardFEN = currentBoardFEN;
    }
    bool getTurn() const { return turn; }
    char getCurrentBoardSquare(int rows, int columns) const { return currentBoard[columns][rows]; }
    std::string getCurrentBoardFEN() const { return currentBoardFEN; }

    void FENToBoard(std::string currentBoardFEN)
    {
        int row = 0;
        int col = 0;
        for (char c : currentBoardFEN)
        {
            if (c == '/')
            {
                row++;
                col = 0;
            }
            else if (c >= '1' && c <= '8')
            {
                col += c - '0';
            }
            else
            {
                currentBoard[row][col] = c;
                col++;
            }
        }
    }
    void boardToFEN(char currentBoard[8][8])
    {
    }
};
