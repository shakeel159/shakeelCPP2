#include <iostream>
#include <string>
#include <vector>
#include "Card.cpp"

//Deck Class courtesy of https://www.youtube.com/watch?v=JF6RDcXnVKI

using std::cout;
using std::endl;
using std::string;

void PrintHand()
{
    
}

int main(int argc, char * argv[])
{
    //std::cout << "still working?" << std::endl;
    Deck deck;
    deck.SetUpCards();
    cout << " " << endl;
    deck.printall();
    return 0;
}