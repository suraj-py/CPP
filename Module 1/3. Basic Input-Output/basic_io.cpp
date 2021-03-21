#include <iostream>

using namespace std;

int main(){

    // declaring variable
    string name;

    cout << "Enter your name : ";

    //using cin to take user input
    cin >> name;

    //using cout to display output on screen
    cout << "\nHey, whatsup " << name;

    //un-buffered error message
    cerr << "\nThere is an error in the program";

    //buffered error message
    clog << "\nError message";

    return 0;

}
