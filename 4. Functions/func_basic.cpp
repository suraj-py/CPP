#include <iostream>
using namespace std;

// greeting function declaration
void greeting();

void hello(){

    cout << "Hello, world .. " << endl;
}

int main(){

    cout << "Hello from main()." << endl;
    hello();
    greeting();

    return 0;
}

// greeting function definition
void greeting(){

    cout << "Hello from greeting().";
}
