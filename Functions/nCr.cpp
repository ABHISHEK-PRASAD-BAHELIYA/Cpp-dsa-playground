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

int nCr(int n, int r)
{

    return factN(n) / (factN(r) * factN(n - r));
}

int main()
{
    int n, r;

    cout << "Enter n for Binomial coefficient : ";
    cin >> n;
    cout << endl;

    cout << "Enter r for Binomial coefficient : ";
    cin >> r;
    cout << endl;

    cout << "Binomial cofficient is : " << nCr(n, r);

    return 0;
}