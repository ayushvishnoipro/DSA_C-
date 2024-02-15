#include<iostream>
using namespace std;
int getmin(int num[],int n)
{
    int mini= 2147483647 ;
    for (int i = 0; i < n; i++)
    {
       mini=min(mini,num[i]);   
    }
    return mini;
    
}
int getmax(int num[],int n)
{
    int max= -2147483648 ;
    for (int i = 0; i < n; i++)
    {
        if (num[i]>max)
        {
            max=num[i];
        }       
    }
    return max;
    
}

int main(){
    int size;
    cin>>size;
    int num[100];
    cout<<"enter the array"<<endl;
    for (int i = 0; i < size; i++)
    {
        
       
        cin>>num[i];
      
    }
    cout<<"the maximum value is"<<getmax(num,size);
    cout<<"the minimum value is"<<getmin(num,size);

    return 0;
}