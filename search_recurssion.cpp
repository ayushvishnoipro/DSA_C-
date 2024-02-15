#include <iostream>
using namespace std;

bool issorted(int *arr, int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }

    else
    {
        bool remainingpart = issorted(arr + 1, size - 1);
        return remainingpart;
    }
}

int main()
{
    int arr[5] = {2, 3, 5, 9, 7};
    int size = 5;

    int ans = issorted(arr, size);

    if (ans)
    {
        cout << "the array is sorted" << endl;
    }
    else
    {
        cout << "the array is not sorted" << endl;
    }
}