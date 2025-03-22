/*A growing organization sought to enhance its payroll process to improve accuracy and efficiency in
calculating employee salaries. The goal was to manage details such as the employee's name, basic
salary, and bonus amount. While most employees would receive a default bonus, there was a need
for flexibility to provide customized bonuses for exceptional performers or those in specialized roles.
To ensure real-time computation of each employee's total salary, the system would dynamically
calculate the total salary by adding the basic salary and the bonus. An inline function was chosen for
this task, allowing the system to compute the total salary instantly during processing. The system was
designed to initialize employee records using a constructor, where the bonus could either be set to a
default value or adjusted according to specific employee criteria.
As the organization expanded, managing employee records efficiently became a key consideration.
The solution involved storing employee details dynamically, ensuring the system could handle a
growing number of records while maintaining scalability and flexibility. Each employee record would
include their personal details, basic salary, and bonus information, with the system displaying a
breakdown of each employee’s details along with their total salary.*/

//This program is prepared by 24CE132_shreeja


#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Employee class
class Employee
 {
    string name;
    double basicSalary;
    double bonus;

public:
    // Constructor to initialize employee details (bonus defaults to 1000 if not specified)
    Employee(string empName, double salary, double empBonus = 1000.0)
        : name(empName), basicSalary(salary), bonus(empBonus) {}

    // Inline function to calculate total salary
    inline double calculateTotalSalary() const {
        return basicSalary + bonus;
    }

    // Function to display employee details
    void displayDetails() const {
        cout << "Name: " << name << "\n";
        cout << "Basic Salary: " << basicSalary << "\n";
        cout << "Bonus: " << bonus << "\n";
        cout << "Total Salary: " << calculateTotalSalary() << "\n";
        cout << "----------------------\n";
    }
};

int main() {
    vector<Employee> employees;

    int numEmployees;
    cout << "Enter number of employees: ";
    cin >> numEmployees;

    for (int i = 0; i < numEmployees; i++) {
        string name;
        double basicSalary, bonus;

        cout << "\nEnter details for employee " << (i + 1) << ":\n";
        cout << "Enter name ";
        cin >> name;  // Accepts only a single word name
        cout << "Enter basic salary: ";
        cin >> basicSalary;
        cout << "Enter bonus (enter -1 to use default bonus of 1000): ";
        cin >> bonus;

        if (bonus == -1)
        {
            bonus = 1000.0;
        }

        employees.emplace_back(name, basicSalary, bonus);
    }

    cout << "\nEmployee Details:\n";
    for (const auto& emp : employees)
    {
        emp.displayDetails();
    }

    return 0;
}
