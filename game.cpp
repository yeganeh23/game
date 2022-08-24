#include "game.h"
#include <iostream>
using namespace std;
char game::get_readmark()
{
    cout << "player1 : choice your symbol(X/O):  "<<endl;
    cin >> p1;
    cout << "player2 : choice your symbol(X/O):   " << endl;
    cin >> p2;
}

void game::board()
{
    system("cls");


    cout << "Player 1 vs  Player 2 " << endl << endl;
    cout << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << " ___ | ___ | ___ " << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << " ___ | ___ | ___ " << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;


    
}
int game::CheckWin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
            && square[4] != '4' && square[5] != '5' && square[6] != '6'
            && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}
int game::start()
{
    turn = 1, choice, check;
   do
   {  
      
       board();
       turn = (turn % 2) ? 1 : 2;
       cout << "player: " << turn << endl;
       cout << "enter your number: " << endl;
       std::cin >> choice; 

       mark = (turn == 1) ? p1.get_printmark()  : p2.get_printmark();

       if (choice == 1 && square[1] == '1')
           square[1] = mark;
       else if (choice == 2 && square[2] == '2')
           square[2] = mark;
       else if (choice == 3 && square[3] == '3')
           square[3] = mark;
       else if (choice == 4 && square[4] == '4')
           square[4] = mark;
       else if (choice == 5 && square[5] == '5')
           square[5] = mark;
       else if (choice == 6 && square[6] == '6')
           square[6] = mark;
        else if (choice == 7 && square[7] == '7')
           square[7] = mark;
       else if (choice == 8 && square[8] == '8')
           square[8] = mark;
       else if (choice == 9 && square[9] == '9')
           square[9] = mark;
 
       else
       {
           cout<<"please change your move" << endl;
           turn --;
           std::cin.ignore();
           std::cin.get();
       }
       check = CheckWin();
       turn ++;
   }while (check == -1);
   board();
   if(check==1)
 
       cout<<" Player "<< --turn <<" win ";
   else
       cout<<" No one won ";
 
   std::cin.ignore();
   std::cin.get();
   
}





