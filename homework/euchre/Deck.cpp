#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <random>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::vector;




enum class CardName { NINE = 9, TEN, JACK, QUEEN, KING, ACE};
enum class Suits { SPADES, HEARTS, DIAMONDS, Clubs};

class Card
{
    public:
    CardName names;
    Suits suits;
    int value;
    void PrintCard()
    {
        PrintValue();
        std::cout << " of ";
        PrintSuits();

        std::cout << std::endl;
    }
    void PrintValue()
    {
        if (names == CardName::JACK)
        {
            std::cout << "jack";
        }
        else if (names == CardName::QUEEN)
        {
            std::cout << "queen";
        }
        else if (names == CardName::KING)
        {
            std::cout << "king";
        }
        else if (names == CardName::ACE)
        {
            std::cout << "ace";
        }
        else
        {
            std::cout << value;
        }
    }

    void PrintSuits()
    {
        if (suits == Suits::SPADES)
        {
            cout << "Spades";
        }
        else if (suits == Suits::HEARTS)
        {
            cout << "Hearts";
        }
        else if (suits == Suits::DIAMONDS)
        {
            cout << "Diamonds";
        }
        else if (suits == Suits::Clubs)
        {
            cout << "Clubs";
        }
        
        
    }

    
};


class Deck
{
    public:
    int len = 24;
    Card arryCards[24], temp;
    void printall()
    {
        
        for (int i = 0; i < len; i++) {
            arryCards[i].PrintCard();
        }
        
    }
    void Shuffle(){
        int i, m;
        for (i = 0; i < 24; i++)
        {
            m = rand() % 24;
            temp = arryCards[i];
            arryCards[i] = arryCards[m];
            arryCards[m] = temp;
        }
        
    }

    // return array of 5 cards
    void PrintHand()
    {
        
        Card hand[5];
        srand(time(0));
        Shuffle();
        for (int r = 0; r < len; r++)
        {
            int index = rand() % len;

        }
        if (len == 0) {
            cout << "no more cards in deck" << endl;
            return;
           // return hand;
        }
        
        int j=0;
        for (int i = len -1; i >= len-5 && i >= 0; i--) {
            arryCards[i].PrintCard();
            hand[j++] = arryCards[i];
        }

        len = len-5;
        if(len < 0) {
            len = 0;
        }
        
        //return hand;
    }
    void GetTrump(){
        for (int i = 0; i < 1; i++) {
            arryCards[i].PrintCard();
        }
    }
    void NewGetTrump(){
        for (int i = 0; i < 2; i++) {
            i++;
            arryCards[i].PrintCard();
        }
    }

    void SetUpCards()
    {
        int index = 0;
        for (int col = (int)Suits::SPADES; col <= (int)Suits::Clubs; col++)
        {
            for (int row = (int)CardName::NINE; row <= (int)CardName::ACE; row++)
            {
                Card c;
                c.suits = (Suits)col;
                c.names = (CardName)row;
                if (c.names == CardName::NINE) {
                    c.value = 9;
                } else {
                    c.value = 10;
                }

                //cout << (int)c.names << " of " << (int)c.suits << endl;

               // int index = (6 * col) + row - 1;

                arryCards[index++] = c;
            }
            
        }
        
    }
};