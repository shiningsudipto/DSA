#include <iostream>
using namespace std;
// Sum of al ODD numbers from 1 to N
int main()
{
    int n = 5;
    int sum = 0;
    int i = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         sum += i;
    //         cout << i << ", ";
    //     }
    // }
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            sum += i;
            cout << i << ", ";
        }
        i++;
    }

    cout << endl;
    cout << "Total:" << sum;
    return 0;
}