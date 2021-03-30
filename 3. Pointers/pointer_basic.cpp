// C++ program to demonstrate
// how to use pointers
#include<iostream>
using namespace std;

int main(){

  int n = 5;
  // Printing memory address of n
  cout << "Memory address of n: " << &n << endl;

  // Creating pointer
  // and assigning our variable memory address to it
  int* ptr = &n;

  // Printing memory using pointer
  cout << "Memory address using Pointer: " << ptr << endl;

  // Dereferencing our pointer
  // i.e printing the actual value that is store in memory address
  cout << "Dereferencing pointer value: " << *ptr << endl;


  return 0;
}
