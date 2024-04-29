//   1
//  121
// 12321
//1234321

#include <iostream>
using namespace std;

int main(){


int i=1;
int n;
cin>>n;
while(i<=n)
{
    //spaces
    int spaces=n-i;
    while(spaces)
    {

       cout<<" ";
       spaces--; 
    }
    
    //numbers
    int j=1;
    while(j<i)
    {
        cout<<j; 
        j++;       //increment
    }
    while(j)
    {
        cout<<j;  
        j--;       //decrement
    }
    cout<<endl;
    i++;

}


}