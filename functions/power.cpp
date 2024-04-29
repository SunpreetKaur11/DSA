#include <iostream>
using namespace std;

int power()
{

int a, b;
cin>>a>>b;

int pow=1;
for(int i=1;i<=b;i++)
{
    pow*=a;
}

return pow;

}


int main(){

int ans=power();
cout<<ans;


}