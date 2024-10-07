enum class Turn {
    WHITE,
    BLACK
};

class Board
{
    private:
        int rows;
        int columns;
        Turn turn;

    Board(int rows, int columns, Turn turn)
    {
        this->rows = rows;
        this->columns = columns;
        this->turn = turn;
    }
    void setRows(int rows)
    {
        this->rows = rows;
    }
    void setColumns(int columns)
    {
        this->columns = columns;
    }
    void setTurn(Turn turn)
    {
        this->turn = turn;
    }
    int getRows()const{return rows;}
    int getColumns()const{return columns;}
    Turn getTurn()const{return turn;}
};
