// {1,2,1,2,3}

#include <iostream>
using namespace std;
#include <math.h>


int main(){

int arr[5]={-3,4,-3,4,6};

int ans=0;

for(int i=0;i<5;i++)
{

    ans=ans^arr[i];
}

cout<<ans;



}