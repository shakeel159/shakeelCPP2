#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::endl;
using std::string;
using std::cin;

class Menu
{
    public:
    
    string response;
    string bevrageName;
    float price;
    float currentPrice;
    string description;
    float orderTotal = 0;

    int itemsInMenu = 8;

    void MenuLists()
    {
       cout << "\n" + bevrageName + ": $"<< price << endl;
    }

    void OrderResponse()
    {
        //OrderLists();
        if(orderTotal > 0)
        {
            cout << "\n\nis there anything else you would like  yes/no" << endl;
            getline (cin, response);
            //cout << response << endl; 
            
            if(response == "yes")
            {
                cout << "\n\nwhat would you like to buy" << endl;
                getline (cin, response);

            }
            else
            {
                cout << "your total is: " << orderTotal<<endl;
                cout << "Have A Nice Day" << endl;
                
            }
        }
        else
        {
            cout << "\n\nwhat would you like to buy" << endl;
            getline (cin, response);
        }
        //OrderResponse();
        
    }
    void OrderLists()
    {
        
        if(response == "Iced Tea")
        {
            orderTotal = orderTotal + price;
            cout << "Current Total: " << orderTotal << endl;
            
        }
        else
        {
            cout << "sorry I dont think we have that in the menu" << endl;
            //orderTotal = orderTotal + price;
        }
    }
    void Order()
    {
        cout << "\n\nwhat would you like to buy" << endl;
        getline (cin, response);

    }

    void OrderTotal()
    {
        orderTotal = orderTotal + price;
        cout << "Current Total: " << orderTotal << endl;
    }

    void ReOrder()
    {
        cout << "\n\nis there anything else you would like  yes/no" << endl;
        getline (cin, response);
        if(response == "yes")
        {
            Order();
        }
        else    
        {
            OrderTotal();
        }
    }

    void OrderCalc()
    {
        //menu.orderTotal = drinkOne.price;
        orderTotal = orderTotal + price;
        //menu.currentPrice = menu.orderTotal;
        cout << "Current Total: " << orderTotal << endl;
        ReOrder();
        //orderTotal = drinkOne.price + orderTotal;
        cout << "Current Total: " << orderTotal << endl;
    }

};