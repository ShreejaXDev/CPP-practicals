/*In a digital mapping application, a team of developers is working on a feature that allows objects to
be repositioned dynamically on a coordinate plane. The application requires precise control over the
movement of individual points representing user-defined markers. To achieve this, the team needs to
design a system that allows a point’s coordinates to be adjusted efficiently while maintaining a fluid
and chainable update mechanism.
To ensure seamless movement, the developers must implement a structure that allows each point to
shift by specified offsets in the x and y directions. Additionally, the solution should be designed in a
way that supports method chaining, enabling multiple transformations to be applied in a single
statement. This requires careful handling of object references, utilizing this pointer to return the
updated object.
Furthermore, the implementation must be optimized for direct memory management, ensuring that
objects are updated through pass-by-reference using pointers.
6.3
A financial analytics company is working on a system that processes large volumes of sorted numerical*/
#include <iostream>
using namespace std;

class point {
private:
    int x, y;

public:
    // Constructor
    point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }

    // Chainable move function using pass by reference
    point* move(int &dx, int &dy) {
        x += dx;
        y += dy;
        return this;
    }

    // Display function
    void display() const {
        cout << "Point (" << x << " , " << y << ")" << endl;
    }
};

int main() {
    int x, y;

    cout << "Enter initial x and y coordinates: ";
    cin >> x >> y;

    // Create point object using pointer
    point *p = new point(x, y);

    cout << "Initial position: ";
    p->display();

    // Input offsets from user
    int dx1, dy1, dx2, dy2;

    cout << "Enter dx1 and dy1: ";
    cin >> dx1 >> dy1;

    cout << "Enter dx2 and dy2: ";
    cin >> dx2 >> dy2;

    // Apply movements with method chaining
    p->move(dx1, dy1)->move(dx2, dy2);

    cout << "Final position after movements: ";
    p->display();

    // Clean up dynamically allocated memory
    delete p;

    return 0;
}
