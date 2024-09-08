#include <iostream>
using namespace std;

int changeX(int x)
{
    x = 2 * x;
    cout << "x = " << x << endl;
}

int main()
{
    int x = 5;
    changeX(x);

    cout << "X = " << x << endl;
    return 0;
}

/* Two way pass args/parameters
  1. pass by value -> copy of args is passed to function.
  2. pass by value -> pass actual value read in pointer lectures.
  */

// Note: when we pass primitive data types in functions is always equal to pass by value.