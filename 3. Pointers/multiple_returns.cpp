//  C++  program to demonstrate
// how we can return multiples values through single function
#include <iostream>
using namespace std;

int getMin(int numbers[], int size){
    int min = numbers[0];
    for(int i = 1; i < size; i++){
        if(min > numbers[i]){
            min = numbers[i];
        }
    }
    return min;
}

int getMax(int numbers[], int size){
    int max = numbers[0];
    for(int i = 1; i < size; i++){
        if(max < numbers[i]){
            max = numbers[i];
        }
    }
    return max;
}

// Single functions to get min max
int getMinAndMax(int numbers[], int size, int* min, int* max){

    for(int i = 1; i < size; i++){

        if(numbers[i] < *min){
            *min = numbers[i];
        }

        if(numbers[i] > *max){
            *max = numbers[i];
        }
    }

}


int main(){

    int numbers[6] = {100, 120, -99, 20, 40, 2};

    // cout << getMin(numbers, 6) << endl;
    // cout << getMax(numbers, 6);
    int min = numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers, 6, &min, &max);
    cout << "Min value: " << min << endl;
    cout << "Max value: " << max;

    return 0;
}
