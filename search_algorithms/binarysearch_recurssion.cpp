#include <iostream>
using namespace std;

bool binarysearch(int *arr, int s, int e, int key)
{
    // base case
    // element not found
    if (s > e)
    {
        return false;
    }
    // element found

    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        return binarysearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarysearch(arr, s, mid - 1, key);
    }
}

int main()
{

    int arr[5] = {2, 3, 5, 9, 7};
    int size = 5;
    int key = 8;

    bool ans = binarysearch(arr, 0, 5, key);
    if (ans)
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }
}