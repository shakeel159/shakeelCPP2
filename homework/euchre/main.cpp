#include <iostream>
#include <string>
#include <vector>
#include <time.h> 
#include "PlayerOne.cpp"
//#include "Deck.cpp"


using std::cout;
using std::endl;
using std::string;

int main(int argc, char * argv[])
{
    Deck deck;
    Player pl;
    Player p2;

    deck.PrintHand();
    //p2.hand = deck.getHand();
    
    //pl.PLayerHand();

    return 0;
}