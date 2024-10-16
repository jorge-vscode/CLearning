#include "board.h"
#include "pieces.h"

int main(){
    Board board;
    setupPieces();
    board.updateCurrentBoardStatus();
    board.showBoard();
    return 0;
}

