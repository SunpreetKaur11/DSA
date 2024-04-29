#include <iostream>
using namespace std;
#include <math.h>

void isPowerOf2(int arr[5])
{

for(int i=0;i<5;i++)
{

int n=arr[i];
int count=0;
while(n)
{
count=count+(n&1);
n=n>>1;
}

if(count==1)
{
    cout<<arr[i]<<" is pow of 2"<<endl;
}

}


}



int main()
{

int arr[5];


cout<<"Taking Inputs";
for(int i=0;i<5;i++)
{

    cin>>arr[i];
    cout<<endl;
}

isPowerOf2(arr);

}