#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
   vector<int> v;

   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   v.push_back(5);

   cout<<"finding value using binary search  "<<binary_search(v.begin(),v.end(),5)<<endl;
   //lower bound= it gives the iterator of the gives data type
   cout<<"finding lowerbound "<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
   cout<<"finding upperbound "<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;


   //some basic algorithms
   int a=3,b=4;
   cout<<max(a,b)<<endl;
   cout<<min(a,b)<<endl;

   swap(a,b);
   cout<<"a="<<a<<"  "<<"b="<<b<<endl;
   
   return 0;
}
