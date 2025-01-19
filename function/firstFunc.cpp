#include <iostream>
using namespace std;

// function
int calculateSum(int a, int b)
{
    return a + b;
}
int getMinNumber(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    cout << "Sum of numbers: " << calculateSum(10, 20) << endl;
    cout << "Minimum number: " << getMinNumber(10, 20) << endl;
    return 0;
}