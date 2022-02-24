#include <iostream>
#include <string>
#include <vector>
#include <time.h> 
#include "PlayerOne.cpp"
#include "Deck.cpp"


using std::cout;
using std::endl;
using std::string;

int main(int argc, char * argv[])
{
    
    Player pl;
    //somehow figure out how to draw different cards in hand from thin air
    //pl.randGen();
    //pl.Trump();

    Deck deck;
    deck.SetUpCards();

    return 0;
}