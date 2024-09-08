#include <iostream>
using namespace std;

// function definition
double sum(double a, double b)
{
    double s = a + b;
    return s;
}

// min of 2 num
int minTwo(int a, int b) // parameters -> copy of arguments
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
    cout << sum(10.5, 5.7) << endl;
    cout << minTwo(2, 5); // arguments -> Actual value
    return 0;
}