// fibonacci series using dynamic programming
#include <iostream>
using namespace std;

int fibo(int n){

    // Declare an array to store
    // Fibonacci numbers.
    // 1 extra to handle
    // case, n = 0
    int f_arr[n+2];
    int i;

    // 0th and 1st number of the
    // series are 0 and 1
    f_arr[0] = 0;
    f_arr[1] = 1;

    for(i = 2; i <= n; i++){
        //Add the previous 2 numbers
       // in the series and store it
        f_arr[i] = f_arr[i-1] + f_arr[i-2];
    }
    return f_arr[n];
}

int main(){

    int n = 10;
    cout << fibo(n);
    return 0;
}
