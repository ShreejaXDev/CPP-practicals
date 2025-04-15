/*A vehicle manufacturing company sought to create a robust system to organize and manage the
details of various cars produced under its brand. To accomplish this, a hierarchical structure was
conceptualized, reflecting the essential components of a vehicle. At the foundation, a class was
designed to represent the type of fuel a vehicle uses. Another class was created to capture the brand
name of the vehicle. These two foundational elements were then combined into a derived class
specifically representing cars, integrating both fuel type and brand information.
Constructors were used at each level to ensure proper initialization of attributes, allowing seamless
integration of all details. Additionally, the ability to display complete information about a car, including
its fuel type and brand, was incorporated into the system. To simulate a real-world scenario such as a
service queue, multiple cars were organized and processed sequentially using a structured approach.
This not only streamlined the handling of cars but also provided an opportunity to compare different
methods of managing the collection and processing of vehicle data.*/


#include<iostream>
#include<queue>

using namespace std;

class Fuel
{
protected :

    string fueltype;

public:

    Fuel(string fuel)
    {
        fueltype=fuel;

    }

    void displayfuel()const
    {
        cout<<"fuel type :"<<fueltype<<endl;
    }

};


class Brand
{
protected:

    string brandname;

public:

    Brand(string brand)
    {
        brandname=brand;

    }

    void displaybrand()const
    {
        cout<<"brand name :"<<brandname<<endl;
    }


};
class Car : public Fuel , public Brand
{
private :

    string model;

public:

    Car(string fuel,string brand,string mdl):Fuel(fuel),Brand(brand)
    {

        model=mdl;

    }

    void displaycar()const
    {
        displaybrand();
        displayfuel();
        cout<<"model :"<<model<<endl;
    }
};


int main()
{
    queue<Car>cq; //for user input

    cq.push(Car("petrol","toyota","corolla"));//string f,b,m;     //loop //cin  //push(car(f,b,m)

    cq.push(Car("diesel","ford","f150"));
    cq.push(Car("cng","tesla","model-s"));

    cout<<endl<<"using stl approch"<<endl;
    while(!cq.empty())
    {
        Car c=cq.front();
        c.displaycar();
        cout<<"-----------------------"<<endl;
        cq.pop();
    }



//using vectors


/*

  vector<Car> cars;
    int n;

    cout << "Enter number of cars: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string fuel, brand, model;

        cout << "\nEnter details for Car " << i + 1 << ":\n";

        cout << "Fuel Type (no spaces): ";
        cin >> fuel;

        cout << "Brand Name (no spaces): ";
        cin >> brand;

        cout << "Model Name (no spaces): ";
        cin >> model;

        // Add car to the vector
        cars.push_back(Car(fuel, brand, model));
    }

    // Display car details
    cout << "\n--- Car Details ---\n";
    for (size_t i = 0; i < cars.size(); ++i) {
        cout << "\nCar " << i + 1 << ":\n";
        cars[i].displaycar();
        cout << "-----------------------" << endl;
    }
*/


cout<<endl<<endl<<"24ce132_shreeja";

}
