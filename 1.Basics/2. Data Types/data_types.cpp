//C++ Program to check size of data types

#include <iostream>

using namespace std;

int main(){

    cout << "Size of char : " << sizeof(char) << " bytes" << endl;

    cout << "Size if wchar_t : " << sizeof(wchar_t) << " bytes" << endl;

    cout << "Size of int : " << sizeof(int) << " bytes" << endl;

    cout << "Size of short int : " << sizeof(short int) << " bytes" << endl;

    cout << "Size of long int : " << sizeof(long int) << " bytes" << endl;

    cout << "Size of signed long int : " << sizeof(signed long int) << " bytes" << endl;

    cout << "Size of unsigned long int : " << sizeof(unsigned long int) << " bytes" << endl;

    cout << "Size of float : " << sizeof(float) << " bytes" << endl;

    cout << "Size of double : " << sizeof(double) << " bytes" << endl;

    return 0;
}
