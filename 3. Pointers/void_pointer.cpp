// void pointer in C++
#include <iostream>
using namespace std;

// Individual function to print individual type pointer
int printNumber(int* num){
    cout << *num << endl;
}

int printLetter(char* chr){
    cout << *chr << endl;
}

// Single function to print all type of pointer
void print(void* value, char type){
    if(type == 'i'){
        cout << *((int*)value) << endl;
    }
    if(type == 'c'){
        cout << *((char*)value) << endl;
    }
}

int main(){
    int n = 5;
    char l = 'A';
    // printNumber(&n);
    // printLetter(&l);
    print(&n, 'i');
    print(&l, 'c');

    return 0;
}
