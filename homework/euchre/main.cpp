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
    Player dealer;
    Player p2;
    Player p3;
    Player p4;

    dealer.SetUpDeck();
    p2.SetUpDeck();
    p3.SetUpDeck();
    p4.SetUpDeck();

    string output;
    //p1.hand = deck.PrintHand();
    //p2.hand = deck.PrintHand();
    for (int i = 0; i < 1; i++)
    {
        cout << endl;
        dealer.Shuffle();
        dealer.GetHand();
    }
    for (int i = 0; i < 1; i++)
    {
        cout << endl;
        p2.Shuffle();
        p2.Shuffle();
        p2.GetHand();
    }
    for (int i = 0; i < 1; i++)
    {
        cout << endl;
        p3.Shuffle();
        p3.GetHand();
    }
    for (int i = 0; i < 1; i++)
    {
        cout << endl;
        //p4.Shuffle();
        p4.GetHand();
    }

    cout << endl;
    cout << "trump card: " <<endl;
    dealer.trump();
    cout << endl;

    output = p2.ChooseToPass();
    output = p3.ChooseToPass();
    output = p4.ChooseToPass();
    if(output == "pass"){
        cout << "Player 2 decided to " + p2.ChooseToPass() << endl;
    }
    else{
        cout << "Player 2 decided to " + p2.ChooseToPass() << endl;
    }
    if(output == "pass"){
        cout << "Player 3 decided to " + p3.ChooseToPass() << endl;
    }
    else{
        cout << "Player 3 decided to " + p3.ChooseToPass() << endl;
    }
    if(output == "pass"){
        cout << "Player 4 decided to " + p4.ChooseToPass() << endl;
    }
    else{
        cout << "Player 4 decided to " + p4.ChooseToPass() << endl;
    }

    
    return 0;
}
