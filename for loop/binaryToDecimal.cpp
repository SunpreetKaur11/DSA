#include <iostream>
using namespace std;
#include <math.h>

int main(){

int n;
cin>>n;

int i=0;
int sum=0;

    while(n)
    {
    
        int digit=n%10;
        n=n/10;
        if(digit==1)
        {
        sum=sum+pow(2,i);
        }
        i++;
    }

    cout<< sum;

}