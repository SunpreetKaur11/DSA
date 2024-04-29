#include <iostream>
using namespace std;
#include <math.h>


int main()
{


        int arr[6]={1,2,2,3,3,5};
        int n=6;
        int freq[n];
        for(int i=0;i<n;i++)
        {
            freq[i]=0;
        }

        for(int i=0;i<n;i++)
        {
            if(freq[arr[i]]>0){
                continue;
            }
            for(int j=0;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                     freq[arr[i]]=freq[arr[i]]+1;
                }
                
            }
        }

        for(int i=0;i<n;i++)
        {
            if(freq[i]>1)
                      cout<<i<<" ";


        }

        



}