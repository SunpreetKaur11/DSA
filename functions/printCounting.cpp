#include <iostream>
using namespace std;

void printCounting(int n)
{
    cout<<"About to print counting.."<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<endl;
    }
}

int main()
{

int n;
cin>>n;

printCounting(n);


}