#ifndef PIECES_H
#define PIECES_H
#include <vector>
#include <array>
#include "board.h"

class Pieces
{
private:
    int position[2];
    bool colour;
    char pieceType;
    std::vector<std::array<int, 2>> possibleMoves;
    bool moved;
    bool pin;
    bool enPassant;
    bool kingSideCastling;
    bool queenSideCastling;
public:
    Pieces(int row, int column, bool colour, char pieceType, bool moved, bool pin, bool enPassant, bool kingSideCastling, bool queenSideCastling)
    {
        this->position[0] = row;
        this->position[1] = column;
        this->colour = colour;
        this->pieceType = pieceType;
        this->moved = moved;
        this->pin = pin;
        this->enPassant = enPassant;
        this->kingSideCastling = kingSideCastling;
        this->queenSideCastling = queenSideCastling;
    }
    void setPosition(int positionX, int positionY)
    {
        this->position[0] = positionX;
        this->position[1] = positionY;
    }
    void setColour(bool colour)
    {
        this->colour = colour;
    }
    void setPieceType(char pieceType)
    {
        this->pieceType = pieceType;
    }
    void setPossibleMoves(const std::vector<std::array<int, 2>> &possibleMoves)
    {
        this->possibleMoves = possibleMoves;
    }
    void setMoved(bool moved)
    {
        this->moved = moved;
    }
    void setPin(bool pin)
    {
        this->pin = pin;
    }
    void setEnPassant(bool enPassant)
    {
        this->enPassant = enPassant;
    }
    void setKingSideCastling(bool kingSideCastling)
    {
        this->kingSideCastling = kingSideCastling;
    }
    void setQueenSideCastling(bool queenSideCastling)
    {
        this->queenSideCastling = queenSideCastling;
    }
    int getPositionY() const { return {position[0]}; }
    int getPositionX() const { return {position[1]}; }
    bool getColour() const { return colour; }
    char getPieceType() const { return pieceType; }
    const std::vector<std::array<int, 2>> &getPossibleMoves() const { return possibleMoves; }
    bool getMoved() const { return moved; }
    bool getPin() const { return pin; }
    bool getEnPassant() const { return enPassant; }
    bool getKingSideCastling() const { return kingSideCastling; }
    bool getQueenSideCastling() const { return queenSideCastling; }
    void findPossibleMoves()
    {
        switch (pieceType)
        {
        case 'p':

            break;
        case 'b':

            break;
        case 'n':

            break;
        case 'r':

            break;
        case 'k':

            break;
        case 'q':

            break;

        default:
            break;
        }
    }
};
std::vector<Pieces> pieces;
void setupPieces()
{
    //rook objects in Pieces
    pieces.push_back(Pieces(0, 0, false, 'r', false, false, false, false, false));
    pieces.push_back(Pieces(0, 7, false, 'r', false, false, false, false, false));
    pieces.push_back(Pieces(7, 0, true, 'r', false, false, false, false, false));
    pieces.push_back(Pieces(7, 7, true, 'r', false, false, false, false, false));

    //knight objects in Pieces  
    pieces.push_back(Pieces(0, 1, false, 'n', false, false, false, false, false));
    pieces.push_back(Pieces(0, 6, false, 'n', false, false, false, false, false));
    pieces.push_back(Pieces(7, 1, true, 'n', false, false, false, false, false));
    pieces.push_back(Pieces(7, 6, true, 'n', false, false, false, false, false));

    //bishop objects in Pieces
    pieces.push_back(Pieces(0, 2, false, 'b', false, false, false, false, false));
    pieces.push_back(Pieces(0, 5, false, 'b', false, false, false, false, false));
    pieces.push_back(Pieces(7, 2, true, 'b', false, false, false, false, false));
    pieces.push_back(Pieces(7, 5, true, 'b', false, false, false, false, false));

    //pawn objects in Pieces
    pieces.push_back(Pieces(1, 0, false, 'p', false, false, false, false, false));
    pieces.push_back(Pieces(1, 1, false, 'p', false, false, false, false, false));
    pieces.push_back(Pieces(1, 2, false, 'p', false, false, false, false, false));
    pieces.push_back(Pieces(1, 3, false, 'p', false, false, false, false, false));
    pieces.push_back(Pieces(1, 4, false, 'p', false, false, false, false, false));
    pieces.push_back(Pieces(1, 5, false, 'p', false, false, false, false, false));
    pieces.push_back(Pieces(1, 6, false, 'p', false, false, false, false, false));
    pieces.push_back(Pieces(1, 7, false, 'p', false, false, false, false, false));
    pieces.push_back(Pieces(6, 0, true, 'p', false, false, false, false, false));
    pieces.push_back(Pieces(6, 1, true, 'p', false, false, false, false, false));
    pieces.push_back(Pieces(6, 2, true, 'p', false, false, false, false, false));
    pieces.push_back(Pieces(6, 3, true, 'p', false, false, false, false, false));
    pieces.push_back(Pieces(6, 4, true, 'p', false, false, false, false, false));
    pieces.push_back(Pieces(6, 5, true, 'p', false, false, false, false, false));
    pieces.push_back(Pieces(6, 6, true, 'p', false, false, false, false, false));
    pieces.push_back(Pieces(6, 7, true, 'p', false, false, false, false, false));

    
}
#endif
