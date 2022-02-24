#include <iostream>
#include <string>
#include <vector>
#include <time.h> 
#include "PlayerOne.cpp"


using std::cout;
using std::endl;
using std::string;

int main(int argc, char * argv[])
{
    
    Player pl;
    for (int i = 0; i < 1; i++)
    {
        pl.randGen();
    }
    
    pl.Trump();



    return 0;
}