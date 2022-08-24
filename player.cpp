#include "player.h"
#include <iostream>
using namespace std;

player::player()
{

}

player::player(char symbol)
{
     this->symbol = symbol;
}
istream &operator >>(istream &input, player &p)
{
    input >> p.symbol;
}
char player::get_printmark()
{
    return symbol;
}



