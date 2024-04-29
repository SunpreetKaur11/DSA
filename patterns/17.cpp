// - - - - *
// - - - * *
// - - * * *
// - * * * *
// * * * * *


#include <iostream>
using namespace std;

int main(){

int i=1;
int n;
cin>>n;

    while(i<=n)
    {
        //space print karo
        int space=n-i;
        while(space)
        {
            cout<<"- ";
            space--;
        }

        //stars print karo
        int j=1;
        while(j<=i)
        {
            cout<<"* ";
            j++;
        }

        
        cout<<endl;
        i++;
    }


}