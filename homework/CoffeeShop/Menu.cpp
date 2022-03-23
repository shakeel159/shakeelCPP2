#include <iostream>
#include <string>
#include <cstdlib>
using std::cout;
using std::endl;
using std::string;

public class Menu
{
    private string bevrageName;
    private int price;
    private string description;

    public int itemsInMenu = 8;

    public void MenuLists()
    {
       cout << " Menu: /n Black Coffe /n Decaf /n Espresso" endl;
    }
}