/*A team of engineers was tasked with developing a program to calculate and manage the areas of

multiple circles for a design project. To achieve this, they devised a solution using a structured, object-
oriented approach. At the foundation of their solution was a base class that represented a generic

shape, responsible for storing and managing the radius of the circle. Building upon this, a specialized
class for circles was created to extend functionality by introducing a method for calculating the area
of a circle based on its radius. Using this framework, the team designed a system to handle multiple
circles, ensuring that the process of storing, calculating, and displaying the areas was efficient and
adaptable. They explored two different approaches for managing the collection of circles—one
focusing on flexibility and dynamic handling, while the other used a more static structure. By
implementing and comparing these methods, the engineers gained insights into the benefits of using
efficient techniques for organizing and processing geometric data, enhancing their problem-solving
capabilities.*/


//this program is prepared by 24ce132_shreeja
#include <iostream>
#include <vector>
#include <cmath> // For M_PI and pow functions


using namespace std;

// Base class for shapes
class Shape
{
protected:
    double radius;
public:
    Shape(double r) : radius(r) {} // Constructor to initialize radius

    // Getter for radius
    double getRadius() const
    {
        return radius;
    }
};

// Derived class for Circle
class Circle : public Shape
 {
public:
    Circle(double r) : Shape(r) {} // Constructor to initialize Circle with radius


    double area() const {
        return M_PI * pow(radius, 2);
    }
};

// Function to manage a collection of circles
void manageCircles() {
    vector<Circle> circles; // Dynamic list to hold circles
    int numCircles;


    cout << "Enter the number of circles: ";
    cin >> numCircles;

    for (int i = 0; i < numCircles; ++i) {
        double radius;
        cout << "Enter the radius for circle " << i + 1 << ": ";
        cin >> radius;


        circles.push_back(Circle(radius));
    }

    // Display areas of all circles
    for (int i = 0; i < circles.size(); ++i) {
        cout << "Circle " << i + 1 << " with radius " << circles[i].getRadius()
             << " has an area of " << circles[i].area() << endl;
    }
}

int main() {
    // Manage circles with user input
    manageCircles();

    cout<<endl<<"24ce132_shreeja ";

    return 0;
}
