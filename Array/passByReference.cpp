#include <iostream>
using namespace std;

void changeArr(int arr[], int size)
{
    cout << "In function\n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    changeArr(arr, 5);

    cout << "in main\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}