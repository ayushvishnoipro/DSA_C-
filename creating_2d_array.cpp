#include <iostream>
using namespace std;
bool ispresent(int arr[][4], int target, int row, int col)
{ // implementing linear search

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
// creating a function to make row wise sum
void printsum(int arr[][4], int row, int col)
{
    cout << "printing rowwise sum=" << endl;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << "  ";
    }
    cout << endl;
}
// creating a function for the largest row sum
int largestrowsum(int arr[][4], int row, int col)
{
    cout << "printing largestrow sum=" << endl;
    int maxi = INT8_MIN;
    int rowindex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[row][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowindex = row;
        }
    }
    cout << "maximum row sum is<<" << maxi << endl;
    return row;
}
int main()
{
    // creating 2d array
    int arr[3][4];

    // taking input
    // we can also take input as
    /*
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr[3][4]={{1,11,111,1111,},{2,22,222,2222},{3,33,333,3333}};
    */
    cout << "enter the elements" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    // taking output
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "enter the element to be searched=" << endl;
    int target;
    cin >> target;

    if (ispresent(arr, target, 3, 4))
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }

    printsum(arr, 3, 4);

    cout << largestrowsum(arr, 3, 4) << endl;

    return 0;
}