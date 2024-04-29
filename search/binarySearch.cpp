#include <iostream>
using namespace std;

int binarySearch(int arr[],int n, int key)
{

   int start=0;
   int end=n-1;
   int mid=(start+end)/2;

   while(start<=end)
    {
        
        if(arr[mid]==key)
        {
            return mid;
        }
        //go right
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
       mid=(start+end)/2;
    }

    return -1;
}

int main()
{
          //0 1 2 3 4
int odd[5]={1,3,5,7,9};
           //0 1 2 3 
int even[4]={2,4,6,8};
int n;
cout<<"Enter element which you want to find: ";
cin>>n;

// int index=binarySearch(odd,5,n);
int index=binarySearch(even,4,n);

cout<<"index: "<<index;


}