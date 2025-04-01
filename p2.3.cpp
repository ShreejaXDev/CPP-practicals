
/*In a growing city, a newly established bank sought to streamline its operations by implementing a
digital system to manage customer accounts. The management envisioned a system where each
account would store details about the account holder, their unique account number, and the current
balance. To ensure flexibility and accuracy, they required functionalities for creating accounts with
varying initial balances, depositing money, withdrawing funds (with checks for sufficient balance), and
generating detailed account summaries.
The bank's IT team faced the challenge of developing a robust solution. They began by sketching out
the essential features of the system. The team highlighted that new accounts could be created in two
ways: one with no initial balance, and another with specified account details and a starting amount.
Additionally, they recognized the need for reliable mechanisms to handle deposits and withdrawals,
ensuring proper validation to prevent overdrafts. Displaying account details in a clear format was also
prioritized for customer communication.
To ensure scalability, the team decided to simulate the system by creating multiple accounts using the
proposed methods. They tested various scenarios, such as depositing and withdrawing different
amounts, handling edge cases like insufficient funds, and verifying that the account summaries were
accurate. This iterative approach helped them refine the system and ensure its readiness for
deployment.*/

//this program is prepared by 24ce132_shreeja




#include <iostream>

using namespace std;

class Account
 {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    // Constructor with no initial balance
    Account(string name, int accNumber) {
        accountHolder = name;
        accountNumber = accNumber;
        balance = 0.0;  // Default balance is 0
    }

    // Constructor with an initial balance
    Account(string name, int accNumber, double initialBalance)
     {
        accountHolder = name;
        accountNumber = accNumber;
        balance = initialBalance;
     }

    // Deposit money into account
    void deposit(double amount)

    {
        if (amount > 0)
            {
            balance += amount;
            cout << "Successfully deposited ₹" << amount << " into account " << accountNumber << ".\n";
            }

            else

            {
            cout << "Invalid deposit amount. Please enter a positive amount.\n";
            }
    }



    // Withdraw money from account with balance check
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Successfully withdrawn " << amount << " from account " << accountNumber << ".\n";
        } else if (amount > balance) {
            cout << "Insufficient funds! Withdrawal failed.\n";
        } else {
            cout << "Invalid withdrawal amount.\n";
        }
    }

    // Display account details
    void displayAccountSummary() const
     {
        cout << "\n----------------------------------\n";
        cout << "Account Summary:\n";
        cout << "Account Holder: " << accountHolder << "\n";
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Balance: $" << balance << "\n";
        cout << "----------------------------------\n";
    }

    // Get account number
    int getAccountNumber() const
    {
        return accountNumber;
    }
};

int main()
{
    cout << "Welcome to the Bank Account Management System!\n";

    // Creating two accounts
    char name1[50], name2[50];
    int accNumber1, accNumber2;
    double initialBalance;

    cout << "\nEnter details for Account 1 (No initial balance required):\n";
    cout << "Enter Account Holder Name: ";
    cin >> name1;
    cout << "Enter Account Number: ";
    cin >> accNumber1;

    cout << "\nEnter details for Account 2 (With initial balance):\n";
    cout << "Enter Account Holder Name: ";
    cin >> name2;
    cout << "Enter Account Number: ";
    cin >> accNumber2;
    cout << "Enter Initial Balance: $";
    cin >> initialBalance;

    // Creating the accounts
    Account account1(name1, accNumber1);
    Account account2(name2, accNumber2, initialBalance);

    // Menu for transactions
    int choice, accNumber;
    double amount;

    do {
        cout << "\nBanking System Menu:\n";
        cout << "1. Deposit\n2. Withdraw\n3. Display Account Summary\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            cout << "Enter Account Number: ";
            cin >> accNumber;
        }

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: $";
                cin >> amount;
                if (accNumber == account1.getAccountNumber()) {
                    account1.deposit(amount);
                } else if (accNumber == account2.getAccountNumber()) {
                    account2.deposit(amount);
                } else {
                    cout << "Invalid Account Number!\n";
                }
                break;

            case 2:
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                if (accNumber == account1.getAccountNumber()) {
                    account1.withdraw(amount);
                } else if (accNumber == account2.getAccountNumber()) {
                    account2.withdraw(amount);
                } else {
                    cout << "Invalid Account Number!\n";
                }
                break;

            case 3:
                if (accNumber == account1.getAccountNumber()) {
                    account1.displayAccountSummary();
                } else if (accNumber == account2.getAccountNumber()) {
                    account2.displayAccountSummary();
                } else {
                    cout << "Invalid Account Number!\n";
                }
                break;

            case 4:
                cout << "Exiting program... Thank you!\n";
                break;

            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    } while (choice != 4);


    cout<<endl<<endl<<"24ce132_shreeja";


    return 0;
}
