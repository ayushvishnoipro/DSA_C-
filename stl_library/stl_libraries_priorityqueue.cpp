#include <iostream>
#include <queue>
using namespace std;

int main()
{
    //creating a max heap
    priority_queue<int> maxi;

    //creating a min heap
    priority_queue<int,vector<int> , greater<int> > mini;

    //entering values in priority queue of max heap
    maxi.push(8);
    maxi.push(4);
    maxi.push(9);
    maxi.push(0);

    //printing the elements
    int n= maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    //entering values in priority queue of min heap
    mini.push(8);
    mini.push(4);
    mini.push(0);
    mini.push(9);

    //printing the elements
    int m= mini.size();
    for (int i = 0; i < m; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    // to check your stack is empty or not we use 'empty' func, ans in bool
    cout << "empty or not=" << mini.empty() << endl;

    //rest all the function are applicable like other data types
    

    return 0;

}