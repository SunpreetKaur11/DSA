#include <iostream>
using namespace std;

int main(){

int n;
cin>>n;
int rem;
int pro=1;
int sum=0;

while(n)
{

rem=n%10;
pro=pro*rem;
sum=sum+rem;

n=n/10;

}

cout<<pro-sum;

}    