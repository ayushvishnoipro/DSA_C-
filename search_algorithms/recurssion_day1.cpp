#include <iostream>
using namespace std;
// creating func for 2 power
int power(int n)
{
    // base case
    if (n == 0)
        return 1;

    // recursive relation
    int smallprob = power(n - 1);
    int bigprob = 2 * smallprob;

    return bigprob;
}

// func for counting
void print(int n)
{
    if (n == 0)
    {
        return;
    }
    // if we put condition here the n it is a head recurssion
    cout << n << endl;
    // recursive relation is tail recursion
    print(n - 1);
}
// climbing stairs probleum
int countDistinctWays(int nStairs)
{
    //  Write your code here.
    // base case
    if (nStairs < 0)
        return 0;

    if (nStairs == 0)
        return 1;

    int ans = countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
    return ans;
}
// coding ninga probleum
int main()
{
    int n;
    cin >> n;
    // int ans = power(n);
    // cout << ans << endl;

    print(n);

    return 0;
}
