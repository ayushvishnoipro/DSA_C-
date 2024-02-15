#include <iostream>
using namespace std;

bool search(int *arr, int size, int key)
{
    // base case
    if (size == 0)
    {
        return false;
    }

    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remainingpart = search(arr + 1, size - 1, key);
        return remainingpart;
    }
}

int main()
{
    int arr[5] = {2, 3, 5, 9, 7};
    int size = 5;
    int key = 8;

    bool ans = search(arr, size, key);
    if (ans)
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }
}
