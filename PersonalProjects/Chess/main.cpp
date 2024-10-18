#include "board.h"
#include "pieces.h"

int main()
{
 
    setupPieces();
    for(auto& obj : pieces){
        if(obj.getPositionX()!=1 && obj.getPositionY()!=1){
            continue;
        }
        obj.findPossibleMoves();
        auto aux = obj.getPossibleMoves();
        for(auto& move : aux){
            std::cout<<"("<<move[0]<<","<<move[1]<<")"<<'\n';
        }
    }
    return 0;
}
