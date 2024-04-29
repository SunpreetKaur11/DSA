#include <iostream>
using namespace std;
#include <math.h>


int main()

{

    int arr[5]={1,2,3,4,5};
    int start=0;
    int end=5-1;

    //reverse arr
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    //print reversed arr
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}