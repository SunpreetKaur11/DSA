//   1
//  22
// 333
//4444

#include <iostream>
using namespace std;

int main()
{
int i=1;
int n;
cin>>n;


    while(i<=n)
    {
        int spaces=n-i;
        while(spaces)
        {
            cout<<" ";
            spaces--;
        }
        int j=1;
        while(j<=i)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;



    }

}
