/*5.5
A software development team is tasked with designing a system that can handle various geometric
shapes and compute their areas in a flexible way. The challenge is to create a system that can easily
extend to accommodate new types of shapes without altering the core functionality for each shape.
To accomplish this, the system is designed with a base class called Shape, which includes a virtual
function Area(). This function is meant to be overridden by each specific shape class to provide the
correct formula for calculating the area.
The derived classes, Rectangle and Circle, each implement the Area() function with their own
formulas: the Rectangle calculates the area using its length and width, while the Circle uses its radius.
This structure allows the system to treat all shapes uniformly through a common interface, enabling
easy extensibility. The goal is to use a single reference to the base class (Shape*) to calculate the area
of any shape, regardless of its type. This approach makes the system more adaptable, as new shapes
can be added later without disrupting existing code.
In managing a collection of shapes, there are two primary approaches: one method involves
dynamically managing a collection of shapes, allowing for easy addition and removal of shapes, while
the other relies on a static method that requires manually managing the size of the collection. Both
approaches aim to store and manage the shapes effectively, with one allowing automatic resizing as
needed while the other requires more manual handling.
Through this case study, the team will implement the base class Shape and the derived classes
Rectangle and Circle, each with their own Area() function. The students will gain a deeper
understanding of polymorphism, inheritance, and memory management while working with different
methods to store and manage the collection of shapes. */




#include<iostream>
#include<vector>
using namespace std;

class shape //abstract class
{
public :
    //pure virtual class
    virtual double area() const=0;


};


class rectangle : public shape
{
    double length, width;

public:

    rectangle(double l , double w)
    {
        length = l;
        width = w;
    }

    double area() const override
     {
        return length * width;

     }
};

class circle : public shape
{
    double radius;

public :

    circle(double r)
    {
        radius =r;
    }

    double area()const override
    {
        return 3.14*radius*radius;
    }

};

int main()
 {
    // Dynamic collection using vector of Shape pointers
    vector<shape*> shapes;

    // Add shapes to the collection
    shapes.push_back(new rectangle(5.0, 3.0));
    shapes.push_back(new circle(2.0));
    shapes.push_back(new rectangle(2.5, 4.0));
    shapes.push_back(new circle(3.5));

    // Calculate and display area of each shape
    for (size_t i = 0; i < shapes.size(); ++i)
        {
        cout << "Shape " << i + 1 << " Area: " << shapes[i]->area() << endl;
    }

    // Clean up memory
    for (shape* s : shapes)
    {
        delete s;
    }
/*

    cout<<endl<<endl<<endl<<endl;
    cout<<"using array: "<<endl<<endl;


     const int SIZE = 4;
    shape* shapes[SIZE];

    shapes[0] = new rectangle(4.0, 6.0);
    shapes[1] = new circle(1.5);
    shapes[2] = new rectangle(3.0, 3.0);
    shapes[3] = new circle(2.2);

    for (int i = 0; i < SIZE; ++i) {
        cout << "Shape " << i + 1 << " Area: " << shapes[i]->area() <<endl;
    }

    // Cleanup
    for (int i = 0; i < SIZE; ++i)
    {
        delete shapes[i];
    }

    */
    return 0;
}
