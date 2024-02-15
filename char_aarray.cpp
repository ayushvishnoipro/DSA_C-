#include <iostream>
using namespace std;
char tolowercase(char ch){
   if (ch>='a'&& ch<='z')
   {
      return ch;
   }
   else{
      char temp=ch-'A'+'a';
      return temp;
   }
   
}
bool check_palindrome(char name[], int n)
{
   int s = 0;
   int e = n - 1;
   while (s <= e)
   {
      if (tolowercase(name[s]) != tolowercase(name[e]))
      {
         return 0;
      }
      else
      {
         s++;
         e--;
      }
   }
   return 1;
}
void reverse(char name[], int n)
{
   int s = 0;
   int e = n - 1;
   while (s < e)
   {
      swap(name[s++], name[e--]);
   }
}

int getlength(char name[])
{
   int count = 0;
   for (int i = 0; name[i] != '\0'; i++)
   {
      count++;
   }
   return count;
}

int main()
{
   // input and output in an char array
   char name[20];
   cout << "enter your name" << endl;
   cin >> name;

   cout << "your name is " << endl;
   cout << name << endl;

   // finding the length of the char array
   cout << "lengthof the char array is  " << getlength(name) << endl;
   int k = getlength(name);

   cout << "your name is after reversing= " << endl;
   reverse(name, k);
   cout << name << endl;

   // tocheck weather the char array is a palindrome or not
   cout << check_palindrome(name, k);

   return 0;
}