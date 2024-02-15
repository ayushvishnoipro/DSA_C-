#include <iostream>
#include <string>
using namespace std;
bool checkpalindrome(string &arr, int i, int j)
{

    // base case
    if (i > j)
        return true;

    if (arr[i] != arr[j])

        return false;

    else
    {
        checkpalindrome(arr, i + 1, j - 1);
    }
}

int main()
{
    string name = "abccba";
    cout << endl;

    bool ispalindrome = checkpalindrome(name, 0, name.length() - 1);

    if (ispalindrome)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}