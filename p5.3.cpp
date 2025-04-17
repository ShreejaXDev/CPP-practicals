/*A team of software developers was tasked with creating a graphical simulation where operations on
2D points play a crucial role. To facilitate this, they designed a class Point that encapsulates the
coordinates 𝑥 and 𝑦. The class provides flexibility through overloaded operators to manipulate points
efficiently. The unary operator - is overloaded to negate the coordinates of a point, while the binary
operator + enables the addition of two points. Additionally, the equality operator == is overloaded to
compare whether two points have identical coordinates.
The development process required performing various operations between multiple points. To
manage these operations effectively, a mechanism was needed to track and potentially undo them.
This challenge prompted two approaches: using a ready-made dynamic stack structure or building a
custom stack implementation. By managing a sequence of operations in reverse, the stack-based
design allowed for a systematic undo capability, crucial for simulations involving iterative adjustments. */

#include <iostream>
#include <stack>
using namespace std;

// Point class
class Point
{
public:

    int x, y;

    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // Overload unary - operator
    Point operator-() const {
        return Point(-x, -y);
    }

    // Overload + operator
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }

    // Overload == operator
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }

    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

// Custom Stack for Points
class PointStack {
private:
    stack<Point> s;

public:
    void push(const Point& p) {
        s.push(p);
    }

    Point pop() {
        if (!s.empty()) {
            Point top = s.top();
            s.pop();
            return top;
        } else {
            return Point(); // Return default if empty
        }
    }

    bool isEmpty() const {
        return s.empty();
    }
};

int main()
{
    int a,b,c,d;
    cout<<"enter x and y coordinates for first input";
    cin>>a>>b;
    cout<<endl<<"enter x and y coordinates for second input";
    cin>>c>>d;


    Point p1(a, b), p2(c, d);

    Point result;

    PointStack history;

    // Operation 1: Addition
    result = p1 + p2;
    history.push(result);
    cout << "After addition: ";
    result.display();

    // Operation 2: Negation
    result = -result;
    history.push(result);
    cout << "After negation: ";
    result.display();

    // Undo last operation
    cout << "Undo last operation: ";
    history.pop(); // Discard current
    result = history.pop(); // Get previous
    result.display();

    return 0;
}
