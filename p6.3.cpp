/*A financial analytics company is working on a system that processes large volumes of sorted numerical
data from different sources. The challenge is to efficiently combine two independently sorted datasets
into a single, fully sorted dataset while ensuring optimal memory management. Since the size of the
datasets varies dynamically based on incoming data streams, the solution must be flexible and manage
memory efficiently without relying on built-in container libraries.
To achieve this, the development team needs to implement a mechanism that accepts two sorted
arrays of different sizes and merges them into a new dynamically allocated array while maintaining
the sorted order. The system should read input values specifying the sizes of both datasets, followed
by the elements of each array. After merging, the final sorted array should be displayed as output.
Efficient memory handling is crucial in this implementation, requiring the use of new and delete
operators for dynamic allocation and deallocation of memory.*/



 #include <iostream>
using namespace std;

int main() {
    int size1, size2;

    // Read sizes
    cout << "Enter the size of first sorted array: ";
    cin >> size1;
    cout << "Enter the size of second sorted array: ";
    cin >> size2;

    // Dynamic allocation for input arrays
    int* arr1 = new int[size1];
    int* arr2 = new int[size2];

    // Input elements of first array
    cout << "Enter elements of first sorted array:\n";
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    // Input elements of second array
    cout << "Enter elements of second sorted array:\n";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    // Allocate memory for merged array
    int mergedSize = size1 + size2;
    int* mergedArr = new int[mergedSize];

    // Merge logic using for loop
    int i = 0, j = 0;
    for (int k = 0; k < mergedSize; k++)
    {
        if (i < size1 && (j >= size2 || arr1[i] <= arr2[j]))
         {
            mergedArr[k] = arr1[i++];
        } else {
            mergedArr[k] = arr2[j++];
        }
    }

    // Output the merged array
    cout << "Merged sorted array:\n";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArr[i] << " ";
    }
    cout << endl;

    // Free dynamically allocated memory
    delete[] arr1;
    delete[] arr2;
    delete[] mergedArr;

    return 0;
}
