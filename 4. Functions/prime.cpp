#include<iostream>
using namespace std;

bool isPrimeNumber(int number){

    for(int i = 2; i < number; i++){
        if(number % i == 0)
            return false;
    }
    return true;
}

int main(){
    int number, range;

    cout << "1. Check a given number is Prime or not ?" << endl;
    cout << "Enter number: ";
    cin >> number;
    bool isPrime = isPrimeNumber(number);
    if(isPrime)
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

    cout << "2. Check all prime numbers between 1 to range ?" << endl;
    cout << "Enter range: ";
    cin >> range;

    cout << "The prime numbers between 1 to " << range << " are:" << endl;
    for(int i = 1; i <= range; i++){
        bool prime = isPrimeNumber(i);
        if(prime)
            cout << i << ", ";
    }

    return 0;
}
