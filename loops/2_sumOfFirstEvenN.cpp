#include <iostream>
using  namespace std;

int main(){

int i=1;
int sum=0;
int n;
cout<<"taking input of n: "<<endl;
cin>>n;

while(i<=n){

if(i%2==0)
{
    sum=sum+i;
}
i++;

}

cout<<"Sum of first N even numbers: "<<sum<<endl;
}