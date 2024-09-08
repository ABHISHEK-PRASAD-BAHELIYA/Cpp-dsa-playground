#include <iostream>
using namespace std;

// function definition
int sayHello()
{
    cout << "hello\n";
    return 3;
}

int main()
{
    sayHello(); // fxn invoke or call

    int a = 10;
    int b = 5;

    int val = sayHello();
    cout << "val = " << val << endl;

    cout << sayHello() << endl;

    return 0;
}