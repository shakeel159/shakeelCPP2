#include <iostream>
#include <string>
#include <vector>
#include <time.h> 
#include "Player.cpp"
//#include "Deck.cpp"


using std::cout;
using std::endl;
using std::string;

int main(int argc, char * argv[])
{
    Deck deck;
    Player p1;
    Player p2;

    p1.SetUpDeck();
    //p1.hand = deck.PrintHand();
    //p2.hand = deck.PrintHand();
    cout << endl;
    p1.GetHand();
    p1.GetHand();
    p1.GetHand();
    p1.GetHand();

    p1.PrintAll();
    cout << endl;
    cout << "trump card: " <<endl;
    p1.trump();
    return 0;
}
