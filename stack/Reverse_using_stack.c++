#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str = "Ayush";
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    string reversed_string;
    while (!s.empty())
    {
        char ch = s.top();
        reversed_string.push_back(ch);
        s.pop();
    }

    cout << "reversed string is = " << reversed_string << endl;

    return 0;
}
