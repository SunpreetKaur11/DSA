#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;
bool isPrime=true; //assuming n is prime
for(int i=2;i<n;i++)
{

if(n%i==0)
{
    isPrime=false;
    break;
}


}

if (isPrime)
{
    cout<<"Prime";
}
else{

    cout<<"Not Prime";
}



}