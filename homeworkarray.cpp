#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int num[5]={1,85,9,49,51};
    int n=sizeof(num)/sizeof(int);
    cout<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        sum=sum+num[i];

        
    }
    cout<<"the sum of the array is"<<sum;
    

    


    return 0;
}