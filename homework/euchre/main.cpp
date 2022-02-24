#include <iostream>
#include <string>
#include <vector>
#include "Card.cpp"
#include <time.h> 
#include "PlayerOne.cpp"

//Deck Class courtesy of https://www.youtube.com/watch?v=JF6RDcXnVKI

using std::cout;
using std::endl;
using std::string;

string CardName[] = { "NINE", "TEN", "JACK", "QUEEN", "KING", "ACE"};


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

    //pl.randGen();

    srand(time(0));
        
        string CardName;
        CardName = CardName[rand() % 6];
        cout << CardName << endl;


    return 0;
}