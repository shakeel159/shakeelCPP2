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
string Suits[] = {"SPADES", "HEARTS" ,"DIAMONDS", "Clubs"};
int CardRand = rand() % 6;
int SuitsRand = rand() % 4;

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

    cout << CardName[CardRand] << " of " << Suits[SuitsRand] << endl;


    return 0;
}