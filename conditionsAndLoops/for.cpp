// for (initialization; condition; increment/decrement) {
//     // Code to execute
// }

#include <iostream>
using namespace std;

// example:
// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         cout << "i = " << i << endl;
//     }
//     return 0;
// }

// Problem: SUM of number from 1 to n;
int main()
{
    int sum = 0;
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Total sum of 1 to " << n << ":" << sum;
    return 0;
}
