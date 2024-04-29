#include <iostream>
using namespace std;
#include <math.h>

void printArray(int arr[], int size)
{
    cout<<endl;    
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void initializeArr(int arr[], int size, int num)
{

    for(int i=0;i<size;i++)
    {
        arr[i]=num;        
    }
    printArray(arr,size);
}

int main()
{

    int arr1[4]={1,2,3,4};
    int size=4;
    printArray(arr1,size);

    int arr2[3]={0};
    size=3;
    printArray(arr2,size);

    int arr3[4]={1};
    size=4;
    printArray(arr3,size);

    int arr4[6];
    size=6;
    int num=1;
    initializeArr(arr4,size,num);

}
