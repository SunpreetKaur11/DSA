
// D
// C D
// B C D
// A B C D


#include <iostream>
using namespace std;

int main(){

int i=1;
int n;
cin>>n;

    while(i<=n){
        {
            int j = 1;
            while(j <= i){
                char ch='A'+(n-i+j-1);   // i=rows and j=cols
                cout<<ch<<" ";
                j++;
            }
            cout<<endl;
            i++;
        }
    }

}