#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::vector;

//enum class CardName { NINE = 1, TEN, JACK, QUEEN, KING, ACE};
//enum class Suits { SPADES, HEARTS, DIAMONDS, Clubs};

std::string Suits[] = {"SPADES", "HEARTS" ,"DIAMONDS", "Clubs"};
std::string CardName[] = { "NINE", "TEN", "JACK", "QUEEN", "KING", "ACE"};

class Player
{
    public:

    void randGen()
    {
        std::string CardName;
        CardName = CardName[rand() % 6];
        std::cout << CardName;
    }
};