
/*A bank wants to create a simple system to manage customer bank accounts. The system should 
allow customers to perform basic banking operations such as depositing money, withdrawing 
money, and checking their account balance. 
Each bank account will need to have an account holder's name, a unique account number, and 
a balance. Deposits should increase the account balance, while withdrawals should only be 
allowed if there are sufficient funds in the account. If an attempt is made to withdraw more 
money than is available, an error message should be displayed. Customers should also have the 
ability to view their account balance whenever required.  
The system must be designed using Object-Oriented Programming principles, focusing on 
creating a simple and efficient solution to manage the accounts effectively. The system should 
ensure that all account details are secure and accessible only through authorized methods. */
 //this program is prepared by 24CE132_shreeja

#include<iostream>
using namespace std;

class bank
{
private:

    string accholder;
    int acc_no;
    double balance,dep,w;

public:

    void getdata()
    {
        cout<<endl<<"enter account holder name ";
        cin>>accholder;

        cout<<endl<<"enter acc number :";
        cin>>acc_no;

        cout<<endl<<"enter intial balance:";
        cin>>balance;



    }

    int get_acc()
    {
        return acc_no;
    }

    void display()
    {
        cout<<endl<<"---------------------------------------------------------------------------";
        cout<<endl<<"NAME :"<<accholder;
        cout<<endl<<"ACC_NO. :"<<acc_no;
        cout<<endl<<" BALANCE :"<<currentbalance();
    }


    void deposite()
    {
    cout<<endl<<"enter how much money you want to deposite";
    cin>>dep;

    balance+=dep;

    cout<<endl<<"you have deposited money successfully";
    }

    double currentbalance()
    {
        return balance;
    }

    void withdraw()
    {
        cout<<endl<<"enter amount you want to withdraw";
        cin>>w;

        if(w>balance)
        {
            cout<<endl<<"you cant withdraw these much amount since you have not sufficient balance :";

        }
        else
        {
            balance-=w;
            cout<<endl<<"you have withdrawn money successfully";
        }
    }

};


int main()
{
   bank b[100];
   int acc_find; //making account find
   int choice; //for making choice
   int num_acc=0; //for tracking account

    //Printing menu
    cout << "Enter 1 to add account details." << endl;
    cout << "Enter 2 to deposit." << endl;
    cout << "Enter 3 to withdraw." << endl;
    cout << "Enter 4 to display current balance." << endl;
    cout << "Else 5 to Exit." << endl;
    cout << "===================================" << endl;


while(true)
{
    cout<<endl<<"enter your choice :";
    cin>>choice;

    bool found=false;
    switch(choice)
    {
    case 1: //for adding details
        {
            b[num_acc].getdata();
            num_acc++;
            break;
        }

    case 2://Case for depositing money
        {
            cout << "Enter the account number: ";
            cin >> acc_find;//Taking input of Account no. to search

            for (int i = 0; i < num_acc; i++)//Loop for matching account no. with entered account no.
            {
                if (b[i].get_acc() == acc_find)//If entered account matched with account no.
                {
                    b[i].deposite();//Calling DepositMoney function

                    found = true;//Account no. matched with entered account no.

                    break;//Break statement
                }
            }
              if(! found)//If not...
                {
                    cout << "Account not found!" << endl;//Printing error message
                }

            break;//Break statement
        }


    case 3://Case for withdrawing money
        {
            cout << "Enter the account number: ";
            cin >> acc_find;//Taking input of Account no. to search

            for (int i = 0; i < num_acc; i++)//Loop for matching Account no. with entered account no.
            {
                if (b[i].get_acc() == acc_find)//If entered account matched with account no.
                {
                    b[i].withdraw();//Calling WithdrawMoney function

                    found = true;//Account no. matched with entered account no.

                    break;//Break statement
                }
            }

            if(! found)//If not...
                {
                    cout << "Account not found!" << endl;//Printing error message
                }

            break;//Break statement
        }

        case 4://Case for displaying current balance
        {
            cout << "Enter the account number: ";
            cin >> acc_find;//Taking input of Account no. to search

            for (int i = 0; i < num_acc; i++)//Loop for matching Account no. with entered account no.
            {
                if (b[i].get_acc() == acc_find)//If entered account matched with account no.
                {
                    b[i].display();//Calling DisplayAccBalance function

                    found = true;//Account no. matched with entered account no.

                    break;//Break statement
                }
            }

            if(! found)//If not...
            {
                cout << "Account not found!" << endl;//Printing error message
            }

            break;//Break statement
        }
        case 5:
            {


        return 0 ;

            }

        }
    }








}


   
          
       
