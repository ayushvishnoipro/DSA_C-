#include <iostream>
using namespace std;
char getmaxoccchar(string s){
   int arr[26]={0};
   for (int i = 0; i<s.length(); i++)
   {
      char ch=s[i];
      int number=0;
      number=ch-'a';
      
      arr[number]++;

   }
   int maxi=-1, ans=0;
   for (int i = 0; i < 26; i++)
   {
      if (maxi<arr[i])
      {
         ans= i;
         maxi=arr[i];
      }
      
   }
   char finalans= 'a'+ans;
   return finalans;
   
   
}
int main()
{
   string s;
   cin>>s;
   cout<<getmaxoccchar(s);
   
   return 0;
}