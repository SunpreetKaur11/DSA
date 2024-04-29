#include <iostream>
using namespace std;

int main(){

int i=1;

int n;
cin>>n;

while(i<=n)
{   
    int col=n-i+1;
    int j=1;
    while(col>=1)
    {
        cout<<j;
        j++;
        col--;
    }

    while(j)
    {   
        if(j!=-3 && j<=n)
        {
             cout<<j;
        }
        j--;
    }

    i++;
    cout<<endl;
}


}