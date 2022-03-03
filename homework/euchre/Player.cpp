#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include "Deck.cpp"
#include <cstdlib>

using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::vector;


class Player
{
    public:
    Card hand[5];
    Deck deck;
    void PLayerHand()
    {
        //Deck deck;
        // randomiz card and set up for loop to only print 5 cards for hand.

        
        
    }
    void GetHand(){
        deck.PrintHand();
        cout << endl;
    }
    void SetUpDeck(){
        deck.SetUpCards();
    }
    void PrintAll(){    
        deck.printall();
    }
    void trump(){
        deck.GetTrump();
    }
};