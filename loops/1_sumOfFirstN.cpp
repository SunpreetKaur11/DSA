#include <iostream>
using namespace std;

int main(){

    // sum of 1 -> N

    int n;      //5
    cout<<"taking input of n: ";
    cin>>n;

    int i=1;
    int sum=0;

    while (i<=n)
    {
       sum=sum+i;
       i++;
    }

   // sum=((i+n)/2)*n;

    
    cout<<sum<<endl;

}

