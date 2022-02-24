#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::vector;





enum class CardName { NINE = 1, TEN, JACK, QUEEN, KING, ACE};
enum class Suits { SPADES, HEARTS, DIAMONDS, Clubs};

class Card
{
    public:
    CardName names;
    Suits suits;
    int value;

    void PrintSuits()
    {
        if (suits == Suits::SPADES)
        {
            cout << "Spades" << endl;
        }
        else if (suits == Suits::HEARTS)
        {
            cout << "Hearts" << endl;
        }
        else if (suits == Suits::DIAMONDS)
        {
            cout << "Diamonds" << endl;
        }
        else if (suits == Suits::Clubs)
        {
            cout << "Clubs" << endl;
        }
        
        
    }
};

class Deck
{
    public:
    Card arryCards[24];

    void printall()
    {
        for (int col = (int)Suits::SPADES; col <= (int)Suits::Clubs; col++)
        {
            for (int row = (int)CardName::NINE; row <= (int)CardName::ACE; row++)
            {
                int index = (6 * col) + row - 1;

                arryCards[index].PrintSuits();
            }

            cout << " " << endl;
        }
    }

    void SetUpCards()
    {
        for (int col = (int)Suits::SPADES; col <= (int)Suits::Clubs; col++)
        {
            for (int row = (int)CardName::NINE; row <= (int)CardName::ACE; row++)
            {
                Card c;
                c.suits = (Suits)col;
                c.names = (CardName)row;
                c.value = (int)c.names;

                cout << (int)c.names << " of " << (int)c.suits << endl;

                int index = (6 * col) + row - 1;

                arryCards[index] = c;
            }
            
        }
        
    }
};