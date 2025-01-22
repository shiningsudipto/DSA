// Write a function to check if a number is prime or not.
// WAF to print all prime numbers between 1 to n.
// WAF to print nth Fibonacci number.

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int printPrimes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n = 9;
    printPrimes(n);
    return 0;
}
