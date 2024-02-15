#include<iostream>
using namespace std;
#include<vector>
int main()
{
    //hoe to create a vector
    vector<int> v;

    //how to enter data in a vector -> push func
    v.push_back(1);

    //another way to enter data in vector
    vector<int> a(5,1);

    for (int i:a)
    {
       cout<<i<<" "; 
    }
    

    //to check capacity of an vector -> Capacity func
    cout<<"capacity"<<v.capacity()<<endl;

    v.push_back(2);
    v.push_back(3);

    //now when we check the capacity then the vector doubles it
    cout<<"capacity"<<v.capacity()<<endl;
    //actually it dumps the previous values of vector in an vector of same size 
    //and stores the new values in the previous vector

    //rest all the func are same as array
    cout<<"size="<<v.size()<<endl;
    cout<<"fornt element="<<v.front()<<endl;
    cout<<"back element="<<v.back()<<endl;
    cout<<"element at 2nd index="<<v.at(2)<<endl;

    //we can pop the element-> pop function
    v.pop_back();

    return 0;

}