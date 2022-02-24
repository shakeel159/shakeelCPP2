#include <iostream>
#include <string>
#include <vector>
#include <time.h> 
#include "PlayerOne.cpp"

//Deck Class courtesy of https://www.youtube.com/watch?v=JF6RDcXnVKI

using std::cout;
using std::endl;
using std::string;

int main(int argc, char * argv[])
{
    //Deck deck;
    Player pl;

    // for (int i = 0; i < 5; i++)
    // {
    //     deck.SetUpCards();
    //     cout << "." << endl;
    //     deck.printall();        
        
    // }

    pl.randGen();



    return 0;
}