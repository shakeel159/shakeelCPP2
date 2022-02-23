#pragma

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;

enum Cards { NINE = 1, TEN, JACK, QUEEN, KING, A};
enum Suits { SPADES, HEARTS, DIAMONDS, Clubs};

class Card
{
    public:
    Cards c;
    Suits s;
};