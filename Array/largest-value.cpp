#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int largest = INT_MIN, size = 6, nums[] = {5, 15, 22, 1, -15, -24};

    for (int i = 0; i < size; i++)
    {
        largest = max(nums[i], largest);
    }

    cout << " Largest number is : " << largest << endl;
    return 0;
}