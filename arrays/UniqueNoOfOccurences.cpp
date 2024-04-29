#include <iostream>
using namespace std;
#include <math.h>


int main()
{

int ar[6]={3,2,1,3,3,3}; // true (unique)



int freq[6]={0,0,0,0,0,0};



    for(int i=0;i<5;i++)    // 3  -> 0   2  -> 1
    {

        if(freq[ar[i]]==0)
        {
        for(int j=0;j<6;j++)   
        {


            if(ar[j]==ar[i])
            {
                freq[ar[i]]=freq[ar[i]]+1;
            }  
         }
        }


    }

    cout<<"printing frequency  :"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<freq[i]<<"  ";
    }

    int ans=0;
    for(int i=0;i<6;i++)
    {
        ans=ar[i]^ans;
    }

    if(ans==0)
    {
        cout<<"unique";
    }
    else
    {
        cout<<"Not Unique";
    }
    

}