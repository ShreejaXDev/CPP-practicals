/*A mathematical research group aimed to create a software model for handling and performing
operations on complex numbers efficiently. To achieve this, they designed a Complex class that
encapsulates the real and imaginary parts of a complex number. The class supports essential operator
overloading to enhance usability, including the addition and subtraction of complex numbers and
custom input and output functionality through the << and >> operators. These overloaded operators
ensure seamless arithmetic and user interaction with the system.
The task involves implementing this system and exploring its capabilities by performing various
operations on complex numbers. Participants are expected to overload the specified operators and
use them to add and subtract complex numbers, as well as to facilitate user-friendly input and output.
Additionally, the solution encourages experimenting with managing collections of complex numbers
to perform batch operations.*/


#include <iostream>
using namespace std;

class Complex
 {
    int real_num;
    int imaginary_num;

public:

    void get(int real, int imag)
     {
        real_num = real;
        imaginary_num = imag;
    }

    void display()
     {
        cout<<endl<<"addition : "<<real_num<<" + ";
        cout<<imaginary_num<<"i"<<endl;
    }

    friend Complex operator+(Complex c1, Complex c2);
};


Complex operator+(Complex c1, Complex c2)
 {
    Complex c;
    c.real_num = c1.real_num + c2.real_num;
    c.imaginary_num = c1.imaginary_num + c2.imaginary_num;
    return c;
}

int main()
{
    Complex c1, c2, c3;
int a,b,c,d;
cout<<"enter two complex numbers :"<<endl;
cout<<"(real and imaginary part)"<<endl;
cout<<"(assume that fist entered value is for real part and another one is for imaginary):"<<endl;

    cout<<"enter fisrt complex number";
    cin>>a>>b;
    cout<<endl<<"enter second complex number :";
    cin>>c>>d;
    c1.get(a, b);
    c2.get(c, d);

    c3 = c1 + c2;

    c3.display();
    return 0;


}
