// Here we can see that more than one variables
// are being used without reporting any error.
// That is because they are declared in the
// different namespaces and scopes.
#include <iostream>
using namespace std;

//Declaring namespace
namespace number{
    int value = 500;
}

// Global variable
int value = 200;

int main(){

    // Local variable
    int value = 100;

    // These variables can be accessed from
    // outside the namespace using the scope
    // operator ::
    cout << "Value from namespace number : " << number::value;

    // Printing local variable value
    cout << "\nValue from local variable : " << value;

    // Printing global variable value
    cout << "\nValue from global variable : " << ::value;

    return 0;
}

