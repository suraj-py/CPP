// sum of n numbers
#include <iostream>
using namespace std;

int recursive_sum(int m, int n) //eg. m = 2, n = 4
{
    if (m == n)
        return m;
    return m + recursive_sum(m+1, n); //eg. (2+(3+(4))) --> (2+(3+4)) --> (2+7) --> 9
}

int main()
{
    // Iterative method
    int i = 1, n = 10;
    int sum = 0;
    for(i; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;

    // Recursive method
    int m = 2, n1 = 4;
    int result = recursive_sum(m, n1);
    cout << result << endl;

    return 0;
}
