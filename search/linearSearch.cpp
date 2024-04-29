#include <iostream>
using namespace std;

bool ls(int arr[9], int key)
{


for(int i=0;i<9;i++)
{

    if(arr[i]==key)
    {
        return true;
    }
}
 return false;

}


int main(){



int arr[9]={1,2,3,4,5,6,7,-14,0};
int key;
cin>>key;

bool found=ls(arr,key);
if(found)
{
    cout<<"Found "<<key;
}
else{
    cout<<"Could not find "<<key;
} 

}