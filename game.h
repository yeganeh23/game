
#include "player.h"


class game 
{
private:
    player p1;
    player p2;
    char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int turn;
    int choice;
    int check;
    char mark;

public:
    
    void board();
    int CheckWin();
    int start();
    char get_readmark();
    
    
};

