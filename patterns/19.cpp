//1 1 1 1
//  2 2 2
//    3 3
//      4

#include <iostream>
using namespace std;

int main()
{

int i=1;
int n;
cin>>n;

while(i<=n)
{

    int space=i-1;
    while(space)
    {
        cout<<"  ";
        space--;
    }

    int j=n-i+1;
    while(j>=1)
    {
        cout<<i<<" ";
        j--;
    }

    i++;
    cout<<endl;

}


}