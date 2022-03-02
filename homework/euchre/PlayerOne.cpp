#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include "Deck.cpp"

using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::vector;


class Player
{
    public:
    Card hand[5];

    void PLayerHand()
    {
        // randomiz card and set up for loop to only print 5 cards for hand.
        //for (int i = 0; i < 5; i++)
        //{
        //    srand(time(0));
        //    
        //}
        
    }

    // void randGen()
    // {
    //     for (int i = 0; i < 5; i++)
    //     {
    //         srand(time(0));
    //         int CardRand = rand() % 6;
    //         int SuitsRand = rand() % 4;
    //         cout << CardName::[CardRand] << " of " << Suits[SuitsRand] << endl;
            
    //     }
    
    // }

    // void Trump()
    // {
    //     int CardRand = rand() % 6;
    //     int SuitsRand = rand() % 4;
    //     cout << endl;
    //     cout << "trump card: " << endl;
    //     cout << CardName[CardRand] << " of " << Suits[SuitsRand] << endl;
    // }

     
};