#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
           return 1;
        }
        
    }
    return 0;
    
}

int main(){
    int arr[10]={151,61,4,6,45,94,987,44,49,47};
    cout<<"enter the element to be found"<<endl;
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if (found)
    {
        cout<<"the key is presnt"<<endl;
    
    }
    else{
        cout<<"the key is absent"<<endl;
    }
    

    return 0;
}