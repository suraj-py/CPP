// C++ program to print numbers
// from 1 to 10 using goto statement
#include <iostream>
using namespace std;

void printNumbers(){

    int n = 1;
    label:
        cout << n << "\n";
        n++;
        if(n <= 10){
            goto label;
        }
}

int main(){
    printNumbers();
    return 0;
}
