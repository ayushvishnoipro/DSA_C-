#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // stack uses the the concept of last in first out(lifo)
    // creating a stack
    stack<string> s;

    //pushing values
    s.push("love");
    s.push("babbar");
    s.push("kumar");

    //printing the top element-> top func
    cout<<"top element="<<s.top()<<endl;


    // to check your stack is empty or not we use 'empty' func, ans in bool
    cout << "empty or not=" << s.empty() << endl;

    //rest all the function are applicable like other data types
    

    return 0;
}