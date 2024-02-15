#include <iostream>
using namespace std;
bool isprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    cout << "enter any number" << endl;
    int n;
    cin >> n;

    if (isprime(n))
    {
        cout << "the number is prime";
    }
    else
    {
        cout << "the number is not prime";
    }

    return 0;
}
