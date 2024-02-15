#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // stack uses the the concept of first in first out(filo)
    // creating a queue
    queue<string> s;

    //pushing values
    s.push("love");
    s.push("babbar");
    s.push("kumar");

    
    cout<<"top element="<<s.front()<<endl;

    // to check your stack is empty or not we use 'empty' func, ans in bool
    cout << "empty or not=" << s.empty() << endl;

    //rest all the function are applicable like other data types



    return 0;

}