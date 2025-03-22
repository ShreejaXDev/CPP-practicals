/*A regional banking institution sought to improve its loan management process by developing a system
that could efficiently handle loan details for applicants. The system was expected to streamline the
calculation of monthly EMIs (Equated Monthly Instalments) and provide detailed loan summaries for
customers. This initiative aimed to enhance customer experience by offering accurate and transparent
information about their loans.
To meet these requirements, the bank's technology team was tasked with designing a solution. They
envisioned a system where each loan would be uniquely identified by a loan ID, and additional details
such as the applicant's name, total loan amount, annual interest rate, and loan tenure in months
would be stored. The team also emphasized the importance of accurately calculating the EMI using a
standard formula based on the loan amount, interest rate, and tenure. The formula incorporated
compound interest principles to determine the fixed monthly payment for the loan term.
EMI= 𝑃 ∗ 𝑅 ∗ (1 + 𝑅)^𝑇
 ((1+𝑅)^𝑇) −1
 As part of the implementation, the developers planned to initialize loans either with default values for
testing purposes or with actual customer data provided at the time of application. The system needed
to include a feature to display comprehensive loan details, including the calculated EMI, in a customer
friendly format. This functionality was intended to aid both customers and bank staff in managing
loan-related queries effectively.*/


//This program is prepared by 24ce132_shreeja

#include <iostream>
#include <cmath>  // For pow() function

using namespace std;

class Loan
{
private:
    int loanID;
    string applicantName;
    double loanAmount;
    double annualInterestRate;
    int tenureMonths;
    double EMI;

public:
    // Default constructor (for testing)
    Loan() {
        loanID = 0;
        applicantName = "Default Applicant";
        loanAmount = 10000.0;
        annualInterestRate = 5.0;
        tenureMonths = 12;
        calculateEMI();
    }

    // Parameterized constructor (for real customer data)
    Loan(int id, string name, double amount, double rate, int tenure)
    {
        loanID = id;
        applicantName = name;
        loanAmount = amount;
        annualInterestRate = rate;
        tenureMonths = tenure;
        calculateEMI();
    }

    // Function to calculate EMI
    void calculateEMI()
    {
        double P = loanAmount;
        double R = (annualInterestRate / 12) / 100;
        int T = tenureMonths;



        if (R == 0)
        {
            EMI = P / T;  // If interest rate is 0, simple division
        }
        else
        {
            double numerator = P * R * pow(1 + R, T);
            double denominator = pow(1 + R, T) - 1;
            EMI = numerator / denominator;
        }
    }

    // Function to display loan details
    void displayLoanDetails() const {
        cout << "\n----------------------------------\n";
        cout << "Loan Summary:\n";
        cout << "Loan ID: " << loanID << "\n";
        cout << "Applicant Name: " << applicantName << "\n";
        cout << "Loan Amount: " << loanAmount << "\n";
        cout << "Annual Interest Rate: " << annualInterestRate << "%\n";
        cout << "Tenure: " << tenureMonths << " months\n";
        cout << "Calculated EMI: $" << EMI << "\n";
        cout << "----------------------------------\n";
    }
};

int main() {
    cout << "Welcome to the Loan Management System!\n";

    // Creating a test loan (default values)
    Loan testLoan;
    cout << "\nDisplaying Default Loan Details for Testing:\n";
    testLoan.displayLoanDetails();

    // Creating a loan with user input
    int loanID, tenureMonths;
    string applicantName;
    double loanAmount, interestRate;

    cout << "\nEnter Loan Details for a New Applicant:\n";
    cout << "Enter Loan ID: ";
    cin >> loanID;
    cout << "Enter Applicant Name: ";
    cin >> applicantName;
    cout << "Enter Loan Amount: ";
    cin >> loanAmount;
    cout << "Enter Annual Interest Rate (%): ";
    cin >> interestRate;
    cout << "Enter Tenure (in months): ";
    cin >> tenureMonths;

    // Creating a loan with user-provided data
    Loan customerLoan(loanID, applicantName, loanAmount, interestRate, tenureMonths);

    // Displaying customer loan details
    cout << "\nDisplaying Customer Loan Details:\n";
    customerLoan.displayLoanDetails();

    cout<<endl<<endl<<"shreeja_24ce132";

    return 0;
}
