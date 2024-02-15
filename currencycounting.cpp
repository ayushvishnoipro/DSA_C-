#include<iostream>
using namespace std;

int main(){
    int i =1330;
    int n100,n50,n20,n1;
    n100=n50=n20=n1=0;
    
    switch(i>=100)
	{
		 case 1:
			n100 = i/100;
        	i -= n100 * 100;
        break;
	}
    switch(i>=100)
	{
		case 1:
			n50 = i/50;
        	i -= n50 * 50;
        break;
	}
    switch(i>=20)
	{
		case 1:
			n20 = i/20;
        	i -= n20 * 20;
        break;
	}
    cout<<"no of 100 rupee notes="<<n100<<endl;
    cout<<"no of 50 rupee notes ="<<n50<<endl;
    cout<<"no of 20 rupee notes ="<<n20<<endl;
    
    
    
    
        
        
        
   
    return 0;
}