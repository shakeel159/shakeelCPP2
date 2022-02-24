#include <iostream>
#include <string>
#include <vector>
#include "Card.cpp"
#include <time.h> 

//Deck Class courtesy of https://www.youtube.com/watch?v=JF6RDcXnVKI

using std::cout;
using std::endl;
using std::string;

int main(int argc, char * argv[])
{
    Deck deck;
    
    int cardsInHand;
    srand (time(NULL));
    cardsInHand = rand() % 5;
    
    //deck.SetUpCards();
    cout << "." << endl;
    //deck.printall();


    return 0;
}