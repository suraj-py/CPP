// C++ program to explain the use
// of continue statement
#include <iostream>
using namespace std;

int main(){

    for(int i=1; i<=10; i++){
        // If i is equals to 6,
        // continue to next iteration
        // without printing
        if(i == 6){
            cout << "I'm out bro";
            continue;
        }
        else{
            // otherwise print the value of i
            cout << i << "\n";
        }
    }
    return 0;
}
