// *
// * *
// * * * 
// * * * *

#include <iostream>
using namespace std;

int main(){

    int n;
    int i;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j <= i){
        cout<<"* ";
        j++;
    }
    cout<<endl;
    i++;
}
}