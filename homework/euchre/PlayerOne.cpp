#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::vector;


string CardName[] = { "NINE", "TEN", "JACK", "QUEEN", "KING", "ACE"};
string Suits[] = {"SPADES", "HEARTS" ,"DIAMONDS", "Clubs"};


class Player
{
    public:

    void randGen()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int i = 0; i < 1; i++)
            {
                srand(time(0));
                int CardRand = rand() % 6;
                int SuitsRand = rand() % 4;
                cout << CardName[CardRand] << " of " << Suits[SuitsRand] << endl;
            }
            
        }
    
    }
};