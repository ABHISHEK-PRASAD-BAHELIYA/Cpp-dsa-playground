#include <iostream>
using namespace std;

int sumOfDigit(int num)
{
    int digitSum = 0, lastDig;

    while (num > 0)
    {
        lastDig = num % 10;
        num = num / 10;
        digitSum += lastDig;
    }
    return digitSum;
}

int main()
{
    int num;

    cout << "Enter any number : ";
    cin >> num;
    cout << "sum of digits of a number : " << sumOfDigit(num);

    return 0;
}

/* calculate sum of digits of a number.
    num = 145%10 = 5
    num = 14%10 = 4
    num = 1%10 = 1
    num = 0 (finally)

    steps:-
    1. num%10 => remainder => last digit.
    2. num = num/10 (found remaining digits).
*/