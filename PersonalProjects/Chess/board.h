#include <iostream>
#include <vector>
#include "pieces.h"


#ifndef BOARD_H
#define BOARD_H
class Pieces;
extern std::vector<Pieces> pieces;
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
void setTurn(bool a);
void setCurrentBoard(char a[8][8]);
void setCurrentBoardFEN(std::string a);
bool getTurn();
char getCurrentBoardSquare(int a, int b);
std::string getCurrentBoardFEN();
void FENToBoard(std::string currentBoardFEN);
void boardToFEN(char currentBoard[8][8]);
void showBoard();
void updateCurrentBoardStatus(std::vector<Pieces> pieces);
//bool isSquareOccupied(int row, int col);
bool isSquareOccupied(int row, int col)
{
    return currentBoard[row][col] != ' ';
}


#endif
