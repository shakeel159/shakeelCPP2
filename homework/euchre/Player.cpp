#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include "Deck.cpp"
#include <cstdlib>

using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::vector;


class Player
{
    public:
    Card hand[5];
    Deck deck;
    void PLayerHand()
    {
        //Deck deck;
        // randomiz card and set up for loop to only print 5 cards for hand.
        //deck.Shuffle();
        deck.PrintHand();
        
        
    }
    void Shuffle(){
        deck.Shuffle();
    }
    void GetHand(){
        deck.PrintHand();
        cout << endl;
    }
    void SetUpDeck(){
        deck.SetUpCards();
    }
    void PrintAll(){    
        deck.printall();
    }
    void trump(){
        deck.GetTrump();
    }

    string ChooseToPass(){
        srand(time(0));
        int array[2] = {1, 2};
        int i, m;
        string pass = "pass";
        string keep = "keep card";
        string output;
        m = rand() % 2;
        //cout << array[m] << endl;
        if(array[m] == 1){
            return pass;
        }
        else{
            return keep;
        }
    }
};