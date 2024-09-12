#include <iostream>
#include <climits> // for INT_MAX
using namespace std;

int main()
{
    int smallest = INT_MAX, size = 6, num[] = {5, 15, 22, 1, -15, -24};

    for (int i = 0; i < size; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
    }

    cout << "Smallest number is : " << smallest;
    return 0;
}