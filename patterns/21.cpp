//1 2 3 4
//  2 3 4
//    3 4
//      4


#include <iostream>
using namespace std;


int main(){


int i=1;
int n;
cin>>n;

    while(i<=n)
    {

        int spaces=i-1;
        while(spaces)
        {
            cout<<" ";
            spaces--;
        }

        int j=i;
        while(j<=n)
        {
            cout<<j;
            j++;
        }
    i++;
    cout<<endl;

    }
}



