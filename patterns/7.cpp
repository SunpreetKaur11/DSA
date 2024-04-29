// 1
// 2 2
// 3 3 3
// 4 4 4 4


#include <iostream>
using namespace std;
int main() {


int i=1;
int n;
cin>>n;

while(i<=n)
{
    int j=1;
    while(j<=i)
    {
        cout<<i<<" ";
        j++;
    }
    i++;
    cout<<endl;
}


}