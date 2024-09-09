#include <iostream>
using namespace std;

int binNum(int decNum)
{
    int ans = 0, pow = 1;

    while (decNum > 0)
    {
        int rem;
        rem = decNum % 2;
        decNum /= 2;
        ans += (rem * pow);
        pow = pow * 10;
    }
    return ans;
}

int main()
{
    int decNum;

    cout << "========= Decimal to Binary ===========\n";
    cout << "Enter a Deciaml number : ";
    cin >> decNum;
    cout << "Binary number is : " << binNum(decNum);

    return 0;
}