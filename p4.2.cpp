
/*A growing organization wanted to develop a system to manage its hierarchy and represent its
structure in a programmatic way. To achieve this, a multilevel approach was designed, reflecting the
natural progression of roles within the organization. At the foundation, a class was created to
represent a person, capturing the basic details such as name and age. Building on this, an intermediate
level was introduced to represent employees, adding a unique identifier for each. Finally, at the
topmost level, a class for managers was created, which included additional details such as the
department they oversee.
The system needed to handle the initialization of all these attributes through constructors at each
level, ensuring the proper propagation of information across the hierarchy. Additionally, the
functionality to display details at every level was included to provide clear insights into the
organization's structure. Two approaches were explored for managing multiple managers: one relied
on an efficient method for retrieval and organization based on employee identifiers, while the other
used a straightforward and static method for storage.*/


#include<iostream>
#include<vector>
#include<string>

using namespace std;

class person
{
protected :

    string name;
    int age;

public :

    person (string n, int a)
{
    name=n;
    age=a;

}

  void display_person()
  {
      cout<<endl<<"name : "<<name<<" , age :"<<age;
  }
};


class emp : public person

{
    protected:

    int id;

public:
    emp(string n, int a, int i) : person(n, a)
    {
        id = i;
    }

    void display_employee()
     {
        display_person();
        cout << " Employee ID: " << id << endl;
    }


};

class manager : public emp
{
protected :

    string department;

public :

    manager(string n, int a, int i,string dep):emp(n,a,i)
    {
        department=dep;
    }

    void display_manager()
    {
        display_employee();
        cout << "Department: " << department << endl;
    }
};


int main()
{


 vector<manager> managers;

    // if you want custom inputs

    /*
    managers.push_back(manager("shreeja ", 35 , 1001 , "Sales"));
    managers.push_back(manager("shlok ", 40 , 1002 , "HR"));
    managers.push_back(manager("rushita", 38 , 1003 , "IT"));

    // Display all manager details
    for (size_t i = 0; i < managers.size(); ++i) {
        cout << "\nManager " << i + 1 << " Details:" << endl;
        managers[i].display_manager();
    }
*/




    int n;

    cout << "Enter the number of managers: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string name, department;
        int age, id;

        cout << "\nEnter details for Manager " << i + 1 << ":\n";

        cout << "Name : ";
        cin >> name;

        cout << "Age: ";
        cin >> age;

        cout << "Employee ID: ";
        cin >> id;

        cout << "Department : ";
        cin >> department;

        // Add manager to the vector
        managers.push_back(manager(name, age, id, department));
    }

    // Display all manager details
    cout << "\n--- Manager Details ---\n";
    for (size_t i = 0; i < managers.size(); ++i) {
        cout << "\nManager " << i + 1 << ":\n";
        managers[i].display_manager();
    }


cout<<endl<<endl<<"24ce132_shreeja";

    return 0;
}
