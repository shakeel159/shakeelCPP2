#include <iostream>
#include <string>
#include <vector>
#include "Card.h"

using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::vector;

//total of 24 cards


enum class CardName { NINE = 1, TEN, JACK, QUEEN, KING, ACE};
enum class Suits { SPADES, HEARTS, DIAMONDS, Clubs};

class Card
{
    public:
    CardName names;
    Suits suits;
    int value;
};

class Deck
{
    public:
    Card arryCards[24];

    void SetUpCards()
    {
        for (int col = (int)Suits::SPADES; col <= (int)Suits::SPADES; col++)
        {
            for (int row = (int)CardName::NINE; row <= (int)CardName::ACE; row++)
            {
                Card c;
                c.suits = (Suits)col;
                c.names = (CardName)row;
                c.value = (int)c.names;

                cout << (int)c.names << " of " << (int)c.suits << endl;
            }
            
        }
        
    }
};
    

