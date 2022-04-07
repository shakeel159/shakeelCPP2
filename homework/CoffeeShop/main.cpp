#include <iostream>
#include <string>
#include "Menu.cpp"

using std::cout;
using std::endl;
using std::string;
using std::cin;

///mnt/c/Users/Jazib/source/repos/JShakeelCpp2/homework/CoffeeShop/build$

int main()
{
    string response;

    Menu menu;
    Menu drinkOne;
    drinkOne.bevrageName = "BlackCoffee";
    drinkOne.price = 2.10;
    Menu drinkTwo;
    drinkTwo.bevrageName = "Latte";
    drinkTwo.price = 3.65;
    Menu drinkThree;
    drinkThree.bevrageName = "Green Tea Lemonade";
    drinkThree.price = 3.25;
    Menu drinkFour;
    drinkFour.bevrageName = "Iced Tea";
    drinkFour.price = 2.25;
    Menu drinkFive;
    drinkFive.bevrageName = "Mocha Frappuccino";
    drinkFive.price = 4.45;
    Menu drinkSix;
    drinkSix.bevrageName = "Iced Coffee";
    drinkSix.price = 2.65;
    Menu drinkSeven;
    drinkSeven.bevrageName = "Caramel Frappuccino";
    drinkSeven.price = 4.45;
    Menu drinkEight;
    drinkEight.bevrageName = "Double Chip Cookie";
    drinkEight.price = 1.95;


    cout << "Welcome to Bay Cafe \n\nMenu:" << endl;

    drinkOne.MenuLists();
    drinkTwo.MenuLists();
    drinkThree.MenuLists();
    drinkFour.MenuLists();
    drinkFive.MenuLists();
    drinkSix.MenuLists();
    drinkSeven.MenuLists();
    drinkEight.MenuLists();
    
    // menu.OrderResponse();
    // menu.orderTotal = drinkFour.price;
    // menu.OrderLists();
    // menu.OrderResponse();
    // menu.orderTotal = drinkFour.price;
    // menu.OrderLists();
    
    //menu.Order();
    cout << "\n\nwhat would you like to buy" << endl;
    getline (cin, response);

    if(response == "Iced Tea")
    {
        menu.orderTotal = drinkFour.price;
        menu.orderTotal = menu.orderTotal + menu.price;
        //menu.currentPrice = menu.orderTotal;
        cout << "Current Total: " << menu.orderTotal << endl;
        menu.ReOrder();
        menu.orderTotal = drinkFour.price + menu.orderTotal;
        cout << "Current Total: " << menu.orderTotal << endl;
            
    }
    else if (response == "BlackCoffee")
    {
        menu.orderTotal = drinkOne.price;
        menu.orderTotal = menu.orderTotal + menu.price;
        //menu.currentPrice = menu.orderTotal;
        cout << "Current Total: " << menu.orderTotal << endl;
        menu.ReOrder();
        menu.orderTotal = drinkOne.price + menu.orderTotal;
        cout << "Current Total: " << menu.orderTotal << endl;
    }
    else if (response == "Latte")
    {
        menu.orderTotal = drinkTwo.price;
        menu.orderTotal = menu.orderTotal + menu.price;
        //menu.currentPrice = menu.orderTotal;
        cout << "Current Total: " << menu.orderTotal << endl;
        menu.ReOrder();
        menu.orderTotal = drinkTwo.price + menu.orderTotal;
        cout << "Current Total: " << menu.orderTotal << endl;
        
    }
    else if (response == "Green Tea Lemonade")
    {
        menu.orderTotal = drinkThree.price;
        menu.orderTotal = menu.orderTotal + menu.price;
        //menu.currentPrice = menu.orderTotal;
        cout << "Current Total: " << menu.orderTotal << endl;
        menu.ReOrder();
        menu.orderTotal = drinkThree.price + menu.orderTotal;
        cout << "Current Total: " << menu.orderTotal << endl;
        
    }
    else if (response == "Mocha Frappuccino")
    {
        menu.orderTotal = drinkFive.price;
        menu.orderTotal = menu.orderTotal + menu.price;
        //menu.currentPrice = menu.orderTotal;
        cout << "Current Total: " << menu.orderTotal << endl;
        menu.ReOrder();
        menu.orderTotal = drinkFive.price + menu.orderTotal;
        cout << "Current Total: " << menu.orderTotal << endl;
        
    }
    else if (response == "Iced Coffee")
    {
        menu.orderTotal = drinkSix.price;
        menu.orderTotal = menu.orderTotal + menu.price;
        //menu.currentPrice = menu.orderTotal;
        cout << "Current Total: " << menu.orderTotal << endl;
        menu.ReOrder();
        menu.orderTotal = drinkSix.price + menu.orderTotal;
        cout << "Current Total: " << menu.orderTotal << endl;
        
    }
    else if (response == "Caramel Frappuccino")
    {
        menu.orderTotal = drinkSeven.price;
        menu.orderTotal = menu.orderTotal + menu.price;
        //menu.currentPrice = menu.orderTotal;
        cout << "Current Total: " << menu.orderTotal << endl;
        menu.ReOrder();
        menu.orderTotal = drinkSeven.price + menu.orderTotal;
        cout << "Current Total: " << menu.orderTotal << endl;
        
    }
    else if (response == "Double Chip Cookie")
    {
        menu.orderTotal = drinkEight.price;
        menu.orderTotal = menu.orderTotal + menu.price;
        //menu.currentPrice = menu.orderTotal;
        cout << "Current Total: " << menu.orderTotal << endl;
        menu.ReOrder();
        menu.orderTotal = drinkEight.price + menu.orderTotal;
        cout << "Current Total: " << menu.orderTotal << endl;
        
    }
    else
    {
        cout << "sorry I dont think we have that in the menu" << endl;
        //orderTotal = orderTotal + price;
        menu.ReOrder();
    }
    
    
}
