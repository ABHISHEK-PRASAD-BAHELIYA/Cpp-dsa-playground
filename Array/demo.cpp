#include <iostream>
using namespace std;

int main()
{
    int size = 5, marks[size];

    for (int i = 0; i < size; i++)
    {
        cin >> marks[i];
    }

    cout << "<============ marks ===============>\n";
    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << endl;
    }
    return 0;
}