#include "board.h"
#include "pieces.h"
#include <unordered_map>

int main()
{
    std::unordered_map <int,char> a= {
        {7,'h'},{6,'g'},{5,'f'},
        {4,'e'},{3,'d'},{2,'c'},
        {1,'b'},{0,'a'}

    };
    setupPieces();
    for (auto &obj : pieces)
    {
        if (obj.getPositionX() != 6 || obj.getPositionY() != 6)
        {
            continue;
        }
        obj.findPossibleMoves();
        auto aux = obj.getPossibleMoves();
        std::cout<<a[obj.getPositionX()]<<8-obj.getPositionY()<<'\n';
        for (auto &move : aux)
        {
            std::cout<<a[move[0]]<<8-move[1]<<'\n';
        }
        std::cout<<obj.getColour();
    }
    return 0;
}
