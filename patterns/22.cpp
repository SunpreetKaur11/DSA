//   1
//  23
// 456
//78910


#include <iostream>
using namespace std;


int main(){

int i=1;
int n;
cin>>n;
int count=1;
while(i<=n)
{

    int spaces=n-i;
    while(spaces)
    {
        cout<<"  ";
        spaces--;

    }
    int j=1;
    while(j<=i)
    {
        cout<<count<<" ";
        count++;
        j++;
    }
    i++;
    cout<<endl;

}


}
