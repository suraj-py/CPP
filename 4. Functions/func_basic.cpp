#include <iostream>
using namespace std;

// function declaration
void greeting();
void introduceMe(string name, string city, int age);

void hello(){

    cout << "Hello, World .. !" << endl;
}

int main(){

    int age;
    string name, city;

    cout << "Hello from main()." << endl;

    hello();
    greeting();

    cout << "Enter name: " << endl;
    cin >> name;
    cout << "Enter city: " << endl;
    cin >> city;
    cout << "Enter age: " << endl;
    cin >> age;
    introduceMe(name, city, age);

    return 0;
}

// greeting function definition
void greeting(){

    cout << "Hello from greeting()." << endl;
}

// introduceMe function definition
void introduceMe(string name, string city, int age=0){
    cout << "My name is " << name << endl;
    cout << "I'm from " << city << endl;
    if (age != 0)
        cout << "My age is " << age << endl;
}
