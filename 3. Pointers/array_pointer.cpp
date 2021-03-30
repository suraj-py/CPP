// C++  program to demonstrate
// how pointers can be used with arrays
#include <iostream>
using namespace std;

int main(){

    int luckyNumbers[5];
    //int numbers[5] = {1, 2, 3, 4, 5};
    // cout << numbers << endl;
    // cout << &numbers[0] << endl;
    // cout << numbers[3] << endl;
    // cout << *(numbers + 2) << endl;

    // Taking user input
    for(int i = 0; i < 5; i++){
        cout << "Enter number: ";
        cin >> luckyNumbers[i];
    }

    // Printing array values using pointer
    for(int i = 0; i < 5; i++){
        cout << *(luckyNumbers + i) << ", ";
    }

    return 0;
}
