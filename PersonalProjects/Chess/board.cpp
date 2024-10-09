#include <array>
#include <iostream>
class Board
{
    private:
        bool turn;
        std::array<std::array<char,8>,8> currentBoard;
        std::string currentBoardFEN;
    Board(bool turn,char currentBoard[8][8])
    {
        this->turn = turn;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
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
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                this->currentBoard[i][j] = currentBoard[i][j];
            }
        }
    }
    void setCurrentBoardFEN(std::string currentBoardFEN){
        this->currentBoardFEN=currentBoardFEN;
    }
    bool getTurn()const{return turn;}
    char getCurrentBoardSquare(int rows, int columns)const{return currentBoard[columns][rows];}
    std::string getCurrentBoardFEN()const{return currentBoardFEN;}

    void FENToBoard(std::string currentBoardFEN){
        int i = 0;
        for(int j = 0; j<currentBoardFEN.size();j++){
            switch(currentBoardFEN[i])
            {
                case 'p':
                currentBoard[i/8][i%8]='p';
                i++;
                break;
                case 'P':
                currentBoard[i/8][i%8]='P';
                i++;
                break;
                case 'k':
                currentBoard[i/8][i%8]='k';
                i++;
                break;
                case 'K':
                currentBoard[i/8][i%8]='K';
                i++;
                break;
                case 'q':
                currentBoard[i/8][i%8]='q';
                i++;
                break;
                case 'Q':
                currentBoard[i/8][i%8]='Q';
                i++;
                break;
                case 'b':
                currentBoard[i/8][i%8]='b';
                i++;
                break;
                case 'B':
                currentBoard[i/8][i%8]='B';
                i++;
                break;
                case 'n':
                currentBoard[i/8][i%8]='n';
                i++;
                break;
                case 'N':
                currentBoard[i/8][i%8]='N';
                i++;
                break;
                case 'r':
                currentBoard[i/8][i%8]='r';
                i++;
                break;
                case 'R':
                currentBoard[i/8][i%8]='R';
                i++;
                break;
                case '1':
                i = i + 1;
                break;
                case '2':
                i = i + 2;
                break;
                case '3':
                i = i + 3;
                break;
                case '4':
                i = i + 4;
                break;
                case '5':
                i = i + 5;
                break;
                case '6':
                i = i + 6;
                break;
                case '7':
                i = i + 7;
                break;
                case '8':
                i = i + 8;
                break;
                case '/':
                i = 0;
                break;
            }
        }
    }
    void boardToFEN(char currentBoard[8][8]){

    }



};
