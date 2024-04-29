#include <iostream>
using namespace std;

int main(){

int n=5;

int ans=0;


while(n!=0){
int digit = n&1;
n=n>>1;

ans=(ans*10)+digit;

}
cout<<ans;

}