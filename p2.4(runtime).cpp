
/*A mid-sized retail store faced challenges in efficiently managing its inventory of items. The store's
management sought to build a system that could keep track of individual items, including details like
a unique item ID, item name, price, and the quantity available in stock. The need for a streamlined
process arose due to frequent stock discrepancies, which led to issues with customer satisfaction and
operational efficiency.
To address this, the store hired a team of developers to create a digital inventory management system.
The envisioned solution would allow for the initialization of item details, either with default values or
specific attributes like ID, name, price, and starting quantity. This system needed to handle operations
like increasing stock levels when new shipments arrived and decreasing stock when items were sold,
ensuring sufficient inventory was available for each transaction. Additionally, the system would
provide clear, detailed summaries of each item's status, aiding in decision-making and reporting.
The developers faced real-world scenarios where they had to manage multiple inventory items
simultaneously. They planned to design an array of inventory items and simulate common tasks such
as adding stock, processing sales transactions, and displaying the current inventory details. Handling
edge cases, such as attempting to sell more items than available in stock, became a critical part of the
implementation to ensure reliability.*/


//runtime instialiasation




#include<iostream>
using namespace std;

class Inventory
{
    int ItemID;
    char ItemName[20];
    float Price;
    int Quantity;

public:

    void AddItemDetails()
    {
        cout << "Enter item ID: ";
        cin >> ItemID;
        cout << "Enter item's name: ";
        cin >> ItemName;
        cout << "Enter price of item: ";
        cin >> Price;

        Quantity = 1;
    }

    int GetItemID()
    {
        return ItemID;
    }

    void IncreaseItemQuan()
    {
        int NewQuantity;
        cout << "Enter quantity to be increased: ";
        cin >> NewQuantity;

        Quantity+=NewQuantity;

        cout << "Item's Quantity is successfully increased!" << endl;
    }

    void DecreaseItemQuan()
    {
        int NewQuantity;
        cout << "Enter quantity to be decreased: ";
        cin >> NewQuantity;

        if(Quantity >= NewQuantity)
        {
            Quantity-=NewQuantity;

            cout << "Item's Quantity is successfully decreased!" << endl;
        }

        else
        {
            cout << "Insufficient quantity!" << endl;
        }
    }

    void DisplayItemDetails()
    {
        cout << "Item's details:" << endl;
        cout << "ID: " << ItemID << endl;
        cout << "Name: " << ItemName << endl;
        cout << "Price: " << Price << endl;
        cout << "Quantity: " << Quantity << endl;
    }
};

int main()
{
    class Inventory I[100];
    int NumItem = 0;
    int ItemFind,Choice;

    cout << "Enter 1 to add item." << endl;
    cout << "Enter 2 to increase quantity." << endl;
    cout << "Enter 3 to decrease quantity." << endl;
    cout << "Enter 4 to display item's details." << endl;
    cout << "Else to Exit." << endl;
    cout << "==================================" << endl;

next :
    cout << "Enter the option which you want: ";
    cin >> Choice;

    switch(Choice)
    {
    case 1:
    {
        I[NumItem].AddItemDetails();
        NumItem++;

        break;
    }

    case 2:
    {
        cout << "Enter item ID: ";
        cin >> ItemFind;

        for (int i = 0; i <= NumItem; i++)
        {
            if (I[i].GetItemID() == ItemFind)
            {
                I[i].IncreaseItemQuan();
                break;
            }

            else
            {
                cout << "Item not found!" << endl;
                break;
            }
        }
        break;
    }

    case 3:
    {
        cout << "Enter item ID: ";
        cin >> ItemFind;

        for (int i = 0; i <= NumItem; i++)
        {
            if (I[i].GetItemID() == ItemFind)
            {
                I[i].DecreaseItemQuan();
                break;
            }

            else
            {
                cout << "Item not found!" << endl;
                break;
            }
        }
        break;
    }

    case 4:
    {
        cout << "Enter item ID: ";
        cin >> ItemFind;

        for (int i = 0; i <= NumItem; i++)
        {
            if (I[i].GetItemID() == ItemFind)
            {
                I[i].DisplayItemDetails();
                break;
            }

            else
            {
                cout << "Item not found!" << endl;
                break;
            }
        }
        break;
    }

    default:
    {
        cout << "24CE132_shreeja" << endl;
        return 0;
    }
    }
    goto next;
}
