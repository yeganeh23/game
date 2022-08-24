#include <iostream>
#include <iomanip>

using namespace std;
using std::istream;
using std::ostream;

class player 
{
private:
    char symbol;
    

public:
    player();
    player(char symbol);
    friend istream &operator >> (istream &, player &);
    char get_printmark();
};



