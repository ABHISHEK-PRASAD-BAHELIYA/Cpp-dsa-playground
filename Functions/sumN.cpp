#include <iostream>
using namespace std;

// Qs:1
int sumN(int n)
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
    cout << sumN(5) << endl;

    int n;
    cout << "enter a number : ";
    cin >> n;

    cout << "sum of Numbers : " << sumN(n);
    return 0;
}