/*A small retail store is facing challenges in managing its inventory effectively. The store sells a
variety of products, each identified by a unique product ID, a name, the available quantity in
stock, and the price per unit. To streamline their operations, the store needs a basic system to
manage this inventory efficiently.
The system must provide the ability to add new products to the inventory, ensuring that each
product has its ID, name, quantity, and price properly recorded. Additionally, the system should
allow the store staff to update the quantity of any existing product, such as when new stock
arrives or when items are sold.
Another essential feature of the system is the calculation of the total value of all products in
the inventory, which is determined by multiplying the quantity of each product by its price and
summing these values for all products.*/


//This program is prepared by 24CE132-shreeja


#include<iostream>
using namespace std;

class Product
{

    int ProdID,Quantity;
    float Price;
    char ProdName[20];


    public:
    void AddProd()
    {
        cout << "Enter product ID: ";
        cin >> ProdID;
        cout << "Enter name of product: ";
        cin >> ProdName;
        cout << "Enter price of product: ";
        cin >> Price;
        Quantity=1;

        cout << "Product is added successfully!" << endl;
    }

    int GetID()
    {
         return ProdID;
    }

    void UpdateQuan()
    {
        cout << "Enter no. of quantity to be update: ";
        cin >> Quantity;
        cout << "Quantity is updated successfully!" << endl;
    }

    int CalculateValue()
    {
         return Quantity*Price;
    }

    void DisplayBill()
    {
        cout << ProdName << "\t";
        cout << Quantity << "\t\t";
        cout << Price << "\t" << CalculateValue() << endl;
    }
};

int main()//Main function
{
    class Product P[100];
    int Choice;
    int ProdFind;
    int ProdCount=0;

    //Printing menu
    cout << "Enter 1 to add new product." << endl;
    cout << "Enter 2 to update quantity of product." << endl;
    cout << "Enter 3 to display bill." << endl;
    cout << "Enter 0 to exit." << endl;
    cout << "======================================" << endl;

next :
    cout << "Enter the option which you want: ";
    cin >> Choice;


        switch (Choice)//Switch case
        {
            case 1://Case for adding new product
                {
                    P[ProdCount].AddProd();//Calling AddProd function
                    ProdCount++;//Increment of ProductCount
                    break;//Break statement
                }

            case 2://Case for updating product's quantity
                {
                    int ProdFind;//Variable for matching product ID

                    cout << "Enter product ID: ";
                    cin >> ProdFind;

                    for(int i=0; i < ProdCount; i++)
                    {
                        if(P[i].GetID() == ProdFind)
                        {
                           P[i].UpdateQuan();
                           break;
                        }

                        else//If not...
                        {
                                cout << "Product not found!" << endl;
                                break;
                        }
                    }
                    break;
                }

            case 3:
                {
                    int TotalValue=0;//Initializing TotalValue variable to 0

                    cout << "--------------------------------------" << endl;
                    cout << "Name\tQuantity\tPrice\tTotal" << endl;
                    cout << "--------------------------------------" << endl;

                    for(int i=0; i < ProdCount ;i++)
                    {
                        P[i].DisplayBill();
                        TotalValue += P[i].CalculateValue();
                    }

                    cout << "--------------------------------------" << endl;
                    cout << "Total Bill: " << TotalValue << endl;//Printing total bill
                    cout << "24CE132_shreeja" << endl;
                    return 0;
                }

            default:
                {
                    cout << "24CE132-shreeja" << endl;
                    return 0;
                }
        }
        goto next;
}
