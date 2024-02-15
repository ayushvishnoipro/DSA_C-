#include <iostream>
#include <list>
using namespace std;

int main()
{
    // creating a list
    list<int> l;

    // entering data in it
    l.push_back(1);
    l.push_front(2);
    
    //here we can not erase directly we need to traverse to the element and then delete it
    l.erase(l.begin());
    //rest all the func are same as other data types
    
    return 0;
}