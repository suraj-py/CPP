// Dynamic array using pointers
// Allocating / Deallocating memory address
// using new and delete

#include <iostream>
using namespace std;

int main(){

    // initialization size of array
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    // Creating dynamic array
    // Allocating memory address
    int* myArray = new int[size];

    // Adding elements to the array
    for(int i = 0; i < size; i++){
        cout << "myArray[" << i << "] = ";
        cin >> myArray[i];
    }

    // Displaying array
    for(int i = 0; i < size; i++){
        cout << *(myArray + i) << ", ";
    }

    // Deallocating memory address
    delete[] myArray;
    myArray = NULL;

    return 0;
}
