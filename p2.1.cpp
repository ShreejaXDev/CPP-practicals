
/*A local construction company frequently deals with rectangular plots and structures of varying
dimensions. To streamline their planning and estimation processes, the company requires a simple
system to manage and analyze rectangular shapes efficiently.
The system must be able to handle multiple rectangles, each with distinct dimensions. For each
rectangle, the length and width need to be defined and stored securely. Additionally, the company
needs the ability to calculate two key metrics for any given rectangle:
The area, to estimate usable space or material coverage. The perimeter, to estimate boundary lengths
or material requirements for edges. To make this system functional, there should be a way to define
or update the dimensions of any rectangle as required. The system should be capable of creating and
managing multiple rectangle records, performing calculations for each, and displaying the results
clearly for analysis and planning purposes.*/
//this program is prepared by 24ce132_shreeja

#include <iostream>
using namespace std;

class Rectangle
 {
private:
    int length;
    int width;

public:

    void setDimensions(int l, int w) //setting the dimensions
    {

            length = l;
            width = w;

    }


    int area() // calculating area
     {
        return length * width;
    }


    int perimeter() //calculating perimeter
     {
        return 2 * (length + width);
     }
};

int main()

{
    int n;
    cout<<endl<<"enter for how many rectangles you want to calculate data";
    cin>>n;

    Rectangle r[n];// creating an array of object for multiple entries

 for(int i=0 ; i<n ; i++)
{


    int l, w;
    cout << "\nEnter length and width of the rectangle: ";
    cin >> l >> w;

    r[i].setDimensions(l, w);

    cout << "Area of the rectangle: " << r[i].area() << endl;
    cout << "Perimeter of the rectangle: " << r[i].perimeter() << endl;


}

cout<<endl<<endl<<"24CE132_shreeja";
    return 0;


}
