#include<iostream>
using namespace std;
int main()
{
    int array[5]={25,78,95,74,23,};
    for (int i = 0; i < 5; i++)
    {
        int minindex=i;
        for (int j = 0; j<5; j++)
        {
             if ( array[j] < array[minindex])
             {
                minindex=j;
             }
             swap(array[minindex],array[i]);
        }
        
    }
    
    for (int k = 0; k < 5; k++)
    {
        cout<<array[k]<<endl;
    }
    
    return 0;
    
}