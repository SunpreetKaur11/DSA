// 1
// 2 3
// 3 4 5
// 4 5 6 7


#include <iostream>
using namespace std;

int main(){

int i=1;
int n;
cin>>n;
while(i<=n){
    int j=1;
    int count = i;
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