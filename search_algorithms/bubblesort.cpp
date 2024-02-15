#include<iostream>
using namespace std;
int main()

{
    int arr[5]={25,78,95,74,23,};   
    for(int i=1;i<5;i++){
        for(int j=0;j<5-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
                
        }
          
    }
    for (int k = 0; k < 5; k++)
    {
        cout<<arr[k]<<endl;
    }
}