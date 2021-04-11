#include<iostream>
using namespace std;

// function declaration
int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

int main()
{
    cout << sum(2, 10) << endl;
    cout << sum(2.1, 4.1) << endl;
    cout << sum(9.2, 8.8, 5.6) << endl;

    return 0;
}

// function definition
int sum(int a, int b){
    return a + b;
}

double sum(double a, double b){
    return a + b;
}

float sum(float a, float b, float c){
    return a + b + c;
}
