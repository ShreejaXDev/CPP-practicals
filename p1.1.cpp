


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

public:
    int acc_no;
    char name[25];
float bal,n,w,am;


   void add() //function for addding amount to account
   {
       cout<<"\nenter account holder name :";
       cin>>name;
       cout<<"\nenter amount you want to add to your balance:";
       cin>>am;
       bal+=am;
   }
   void withdraw() //function for withdrawing money
   {
       cout<<endl<<"\nenter amount you want to withdraw";
       cin>>w;

       if(w>bal)
       {
           cout<<endl<<"\nyou cant withdraw this much money since your balance is less then that";
       }
   }
   void balance() //function for checking current balance
   {
      if(w<=bal)
      {
          n=bal-w;
          cout<<endl<<"current balance: "<<n;
      }
      else
         cout<<endl<<"current balance: "<<bal;
   }
   };
   int main()
   {

       bank bb;
       bb.acc_no=12345;
       bb.bal=5000;
        cout<<"INTIAL BALANCE :"<<bb.bal;
        bb.add();
        bb.withdraw();
        bb.balance();

        cout<<endl<<endl<<"24CE132_shreeja";

       return 0;
   }
