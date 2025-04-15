/*A technology firm aimed to develop a flexible and reusable solution for managing collections of various
data types, including integers, floating-point numbers, and characters. The system was intended to
perform fundamental operations on these collections, such as finding the maximum value, reversing
the collection, and displaying all elements. To achieve versatility and avoid redundancy in code, the
solution was designed to use function templates, allowing the same logic to be applied seamlessly to
different data types.
The team recognized the importance of using dynamic arrays to store the collections, enabling
efficient management of varying collection sizes. The design emphasized scalability and flexibility,
ensuring that the system could handle different data types and their associated operations with
minimal changes to the core logic.
In practice, the system allowed for the creation of collections for various data types, such as integers,
floating-point numbers, and characters. The operations on these collections included determining the
maximum value, reversing the order of elements, and printing the collection contents.*/

//this program is prepared by 24ce132_shreeja
#include <iostream>

using namespace std;

// Template function to find the maximum value in an array
template <typename T>
T findMax(T arr[], int size) {
    T maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

// Template function to reverse an array
template <typename T>
void reverseArray(T arr[], int size)
{
    for (int i = 0; i < size / 2; i++) {
        swap(arr[i], arr[size - 1 - i]);
    }
}

// Template function to display an array
template <typename T>
void displayArray(T arr[], int size)
 {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
 {
    // Integer array
    int intArr[] = {3, 7, 2, 9, 5};
    int intSize = 5;

    cout << "Integer Array: ";
    displayArray(intArr, intSize);
    cout << "Max: " << findMax(intArr, intSize) << endl;
    reverseArray(intArr, intSize);
    cout << "Reversed: ";
    displayArray(intArr, intSize);

    // Floating-point array
    float floatArr[] = {2.5, 7.1, 3.3, 9.9, 4.4};
    int floatSize = 5;

    cout << "\nFloat Array: ";
    displayArray(floatArr, floatSize);
    cout << "Max: " << findMax(floatArr, floatSize) << endl;
    reverseArray(floatArr, floatSize);
    cout << "Reversed: ";
    displayArray(floatArr, floatSize);

    // Character array
    char charArr[] = {'A', 'Z', 'C', 'M', 'B'};
    int charSize = 5;

    cout << "\nCharacter Array: ";
    displayArray(charArr, charSize);
    cout << "Max: " << findMax(charArr, charSize) << endl;
    reverseArray(charArr, charSize);
    cout << "Reversed: ";
    displayArray(charArr, charSize);

    cout<<endl<<endl<<"24ce132_shreeja";

    return 0;
}
