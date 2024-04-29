#include <iostream>
#include <math.h>
using namespace std;


int main()
{

    int n;
    cin>>n;
    
    int i=0;
    int ans=0;

    int count = 0;
    int faken=n;
    while(faken){

       int dig=faken&1; 
       n=n>>1;
       count++;
    }
    cout<<faken;
    
    // while(n)
    // {
        
    //     int digit=n&1;
    //     n=n>>1;
        
    //     ans=(digit * pow(10,i))+1;
    //     i++;
    // }

    // cout<<ans;

}