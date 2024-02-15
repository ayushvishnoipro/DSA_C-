#include <iostream>
#include <set>
using namespace std;

int main()
{
    // this data type contains unique elements
    // it is implemented using bst , which means that it cannot be modified 
    //only we can enter data or can delete it
    //element comes out in sorted order
    //unorder set is slow than the sorted set and the output comes in unsorted manner
    //it have a complexity of big o of log(n)
    
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(6);
    s.insert(3);
    s.insert(3);
    s.insert(6);

    for (auto i : s)
    {
        cout<<i<<endl;
    }
    set<int>:: iterator it =s.begin();
    it++;

    s.erase(it);
    for (auto i : s)
    {
        cout<<i<<endl;
    }
    cout<<endl;

    cout<<"5 is present or not  "<<s.count(5)<<endl;
    //find it is used to find weather the value is present at the iterator
    set<int>::iterator itr=s.find(5);

    //to print the values after the iterator
    for(auto it=itr;it!=s.end();it++)
    {
        cout<<*it<<endl;
    }

    return 0;
}
