// Program to illustrate break statement using linear search
#include <iostream>
using namespace std;

void findElement(int arr[], int size, int key){
    // loop traverse array and serach for key
    for(int i=0; i < size; i++){
        if(arr[i] == key){
            cout << "Element found at index : " << i;
            break;
        }
    }
}

int main(){
    int arr[] = {12, 11, 23, 34, 13, 49};
    int n = 6; // no. of elements in array
    int key = 34; // key to be searched

    // calling the findElement function
    findElement(arr, n, key);

    return 0;
}
