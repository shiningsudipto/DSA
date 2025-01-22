#include <iostream>
using namespace std;
// Calculate sum of digits of a number.
int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
int main()
{
    cout << "sum = " << sumOfDigits(12345) << endl;
    return 0;
}