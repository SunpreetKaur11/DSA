#include <iostream>
using namespace std;
#include <math.h>




void Print(int arr[], int n)
{

cout<<endl<<"Printing values of array"<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<"  ";
}



}


void Swap(int arr[], int n)
{

    int prev=0;
    int next=prev+1;

    while(next<n)
    {
        swap(arr[prev],arr[next]);
        prev=next+1;
        next=prev+1;
    }

}

int main()
{
    int n;
    cout<<"Taking size of array:"<<endl;
    cin>>n;

    cout<<endl<<"Taking values of array"<<endl;
    int arr[n];


    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    Swap(arr,n);
    Print(arr,n);
    


}