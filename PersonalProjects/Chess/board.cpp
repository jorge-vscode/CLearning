#include <vector>
#include <iostream>
#include "pieces.h"

class Pieces;
class Board
{
private:
    bool turn = true; // true = white, false = black
    char currentBoard[8][8] = {
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}};
    std::string currentBoardFEN = "rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR";
    Pieces* pieces;

public:
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
        int aux{0};
        currentBoardFEN = "";
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (currentBoard[i][j] > 60 && aux == 0)
                {
                    currentBoardFEN += currentBoard[i][j];
                }
                else if (currentBoard[i][j] < 60)
                {
                    aux++;
                }
            }
            if (aux != 0)
            {
                currentBoardFEN += std::to_string(aux);
                aux = 0;
            }
            currentBoardFEN += '/';
        }
    }
    void showBoard()
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (i == 0 && j == 8)
                {
                    continue;
                }
                else if (i == 0 && j != 8)
                {
                    std::cout << char('a' + j);
                }
                else if (i != 0 && j == 8)
                {
                    std::cout << 9 - i;
                }
                else
                {
                    std::cout << currentBoard[i - 1][j];
                }
            }
            std::cout << '\n';
        }
    }
    void updateCurrentBoardStatus()
    {
        for (const auto &obj : pieces)
        {
            currentBoard[obj.getPositionY()][obj.getPositionX()] = obj.getPieceType();
            if (obj.getColour() == true)
            {
                currentBoard[obj.getPositionY()][obj.getPositionX()] -= 32;
            }
        }
    }
    bool isSquareOccupied(int row, int col)
    {
        return currentBoard[row][col] != ' ';
    }
};




