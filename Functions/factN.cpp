#include <iostream>
using namespace std;

int factN(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter a numbers : ";
    cin >> n;
    cout << "Factorial of " << n << " is : " << factN(n);
}