#include <iostream>
using namespace std;

void reverseArray(int arr[], int sz)
{
    int start = 0, end = sz - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int sz = 7;
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, sz);

    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}