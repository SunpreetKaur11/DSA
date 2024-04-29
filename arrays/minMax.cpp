#include <iostream>
using namespace std;
#include <math.h>

void minMax(int arr[],int size)
{

    int minimum=INT_MAX;
    int maximum=INT_MIN;
    for(int i=0;i<size;i++)
    {
        minimum=min(minimum,arr[i]);
        maximum=max(maximum,arr[i]);

    }

    cout<<"Min value: "<<minimum<<endl;

    cout<<"Max value: "<<maximum<<endl;
}



void input(int arr[],int size)
{
    cout<<"Taking inputs for array:  "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        cout<<" ";
    }
}

int main()
{

cout<<endl<<"Enter size of array"<<endl;

int size;
cin>>size;
int arr[size];

//take inputs for array
input(arr,size);

//Find min and max in array
minMax(arr,size);

}