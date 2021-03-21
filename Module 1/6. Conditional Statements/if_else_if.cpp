// if else if ladder in C++
#include <iostream>
using namespace std;

int main(){

    int i = 20;

    if(i == 21){
        cout << "correct number on 1st check";
    }
    else if(i == 22){
        cout << "correct number on 2n check";
    }
    else if(i == 20){
        cout << "correct number on 3rd check";
    }
    else{
        cout << "Number not available";
    }

    return 0;
}
