#include <iostream>
using namespace std;
// Check if a number is prime or not.
int main()
{
    int n = 11;
    bool isPrime = true;
    for (int i = 2; i * i <= n; i++) // i < n
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "Prime number\n";
    }
    else
    {
        cout << "Non prime number\n";
    }
    return 0;
}