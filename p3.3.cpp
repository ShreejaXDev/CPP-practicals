


/*A community bank sought to enhance its account management system with a digital solution to
improve efficiency and provide better customer service. The system was required to manage the
essential details of each account, including the account number, account holder’s name, and balance.
Additionally, the bank wanted to provide a secure mechanism for transferring money between
accounts, allowing customers to easily manage their funds.
The bank also needed a way to track the total number of accounts created, which would be important
for generating reports and understanding the growth of their customer base. This feature was aimed
at helping the bank maintain an overview of their account portfolio and analyze trends over time.
To ensure smooth and reliable operations, the system was designed to store account information in a
way that would allow easy access and updates. When new accounts were created, they would be
added to the system dynamically. The management team planned for future scalability and
performance improvements by considering more efficient storage and retrieval methods after the
initial system was built, ensuring that the bank could easily accommodate more accounts and
transactions as the customer base grew.*/


//This Program is prepared by 24CE089_NILAY PATEL
#include<iostream>//Standard Input/Output library
using namespace std;

class BankAccount
{
    //Private data-members
    char AccHolderName[10];
    long Balance;
    long AccNum;

    //Making public functions for different tasks
public:

    void AddAccDetails()//Function for entering details of bank account
    {
        cout << "Enter the account holder's name: ";
        cin >> AccHolderName;//Taking input of account holder's name
        cout << "Enter the account number: ";
        cin >> AccNum;//Taking input of account number
        cout << "Enter the account balance: ";//Taking input of balance
        cin >> Balance;//Taking input of balance

        Balance = 1000;

        cout << "Account addition successful!" << endl;//Printing message
    }

    inline void WithdrawMoney(long X)//Function to withdraw
    {
        Balance -= X;//The amount to be withdrew from account
    }

    inline void DepositMoney(long X)//Function to deposit
    {
        Balance += X;//The amount to be deposited in account
    }

    inline int GetAccNum()//Function for returning the value of account number
    {
        return AccNum;//Return statement
    }

    inline int GetBalance()//Function for returning the value of account number
    {
        return Balance;//Return statement
    }
};

int main()
{
    //Creating object
    class BankAccount Acc[100];
    int NumAcc = 0;//Variable for tracking the no. of account & initializing to 0
    int Choice;//Variable for choice
    long Amount;

    //Printing menu
    cout << "Enter 1 to add account details." << endl;
    cout << "Enter 2 for money tranfer." << endl;
    cout << "Enter 3 to display no. of accounts." << endl;
    cout << "Else to exit." << endl;
    cout << "===================================" << endl;

    next :
    cout << "Enter the option which you want: ";
    cin >> Choice;//Taking input of choice

    switch (Choice)//Switch case
    {
         case 1://Case for adding account details
            {
                Acc[NumAcc].AddAccDetails();//Calling AddAccDetails function
                NumAcc++;//Increment in NumAcc Variable

                break;//Break statement
            }

         case 2:
            {
                long AccFindW,AccFindD;//Variable for matching account number
                bool Found = false;

                cout << "Enter the account no. for withdrawal: ";
                cin >> AccFindW;//Taking input of Account no. to search

                for (int i = 0; i < NumAcc; i++)//Loop for matching Account no. with entered account no.
                {
                    if (Acc[i].GetAccNum() == AccFindW)//If entered account matched with account no.
                    {
                        Found = true;
                        continue;//Continue statement
                    }
                }

                if(! Found)
                {
                    cout << "Account not found!" << endl;
                    goto next;
                }

                cout << "Enter the account no. for deposit: ";
                cin >> AccFindD;//Taking input of Account no. to search

                Found = false;

                for (int i = 0; i < NumAcc; i++)//Loop for matching Account no. with entered account no.
                    {
                        if (Acc[i].GetAccNum() == AccFindD)//If entered account matched with account no.
                        {
                            Found = true;
                            continue;//Continue statement
                        }
                    }

                if(! Found)
                {
                    cout << "Account not found!" << endl;
                    goto next;
                }

                cout << "Enter the amount be transfered: ";
                cin >> Amount;

                if(Amount >= Acc[AccFindW].GetBalance() - 1000)
                {
                    cout << "Insufficient balance!" << endl;
                    goto next;
                }

                else
                {
                    Acc[AccFindD].WithdrawMoney(Amount);
                    Acc[AccFindW].DepositMoney(Amount);

                    cout << "Amount is successfully transfered!" << endl;
                }
                break;//Break statement
            }

         case 3:
            {
                cout << "The no. of account created: " << NumAcc << endl;
                break;
            }

            default://Default Case
            {
                cout << "24CE132_shreeja" << endl;//Printing exiting message
                return 0;//Return statement
            }
    }
    goto next;
}
