#include<iostream>
using namespace std;
#include<deque>
int main()
{
    //creating a decque
    deque<int> d;

    //entering data in it
    d.push_back(1);
    d.push_front(2);

    for (int i :d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //poping an item from front and back
    d.pop_back();
    for (int i :d)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    d.pop_front();
    for (int i :d)
    {
        cout<<i<<" ";
    }

    //we can erase using erase func we need to give it a range to erase the items
    d.erase(d.begin(),d.begin()+1);

    //rest all the functions work in it like arr,vector
    cout<<"fornt element="<<d.front()<<endl;
    cout<<"back element="<<d.back()<<endl;
    cout<<"element at 2nd index="<<d.at(1)<<endl;
    cout<<"empty or not="<<d.empty()<<endl;

    

    

    return 0;

}