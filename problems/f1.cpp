// Calculate sum of numbers from 1 to N;

#include <iostream>
using namespace std;

int getSumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int n = 10;
    cout << "Total sum: " << getSumN(n);
    return 0;
}