#include <vector>
#include <array>

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
    Pieces(int position[2], bool colour, char pieceType, bool moved, bool pin, bool enPassant, bool kingSideCastling, bool queenSideCastling)
    {
        this->position[0] = position[0];
        this->position[1] = position[1];
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
    std::array<int, 2> getPosition() const { return {position[0], position[1]}; }
    bool getColour() const { return colour; }
    char getPieceType() const { return pieceType; }
    const std::vector<std::array<int, 2>> &getPossibleMoves() const { return possibleMoves; }
    bool getMoved() const { return moved; }
    bool getPin() const { return pin; }
    bool getEnPassant() const { return enPassant; }
    bool getKingSideCastling() const { return kingSideCastling; }
    bool getQueenSideCastling() const { return queenSideCastling; }
};
