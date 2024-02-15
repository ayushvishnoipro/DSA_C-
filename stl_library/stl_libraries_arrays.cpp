#include <iostream>
using namespace std;
#include <array>
int main()
{

    // basic array implementation
    int basic[3] = {1, 2, 3};

    // arrays using stl libraries
    array<int, 4> a = {1, 24, 3, 4};
    cout << sizeof(a) << endl;

    // implementing stl array
    int size = a.size();
    cout << size << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    // to check what is at any index we use 'at' function
    cout << "what is at 2nd index=" << a.at(2) << endl;

    // to check your array is empty or not we use 'empty' func, ans in bool
    cout << "empty or not=" << a.empty() << endl;

    // to find front and last element we use -> front , back function
    cout << "first element=" << a.front() << endl;
    cout << "last element=" << a.back() << endl;
    return 0;
}