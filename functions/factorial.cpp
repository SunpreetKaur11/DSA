#include <iostream>
#include <math.h>
using namespace std;

int factorial(int num)
{
    int fac=1;
    for(int i=1;i<=num;i++)
    {
        fac=fac*i;
    }
    
    return fac;
}

int nCr(int n, int r)
{

    int numerator=factorial(n);
    int denominator= factorial(r)*factorial(n-r);
    int ans=numerator/denominator;
    return ans;
}

int main()
{

int n,r;
cin>>n>>r;
int ncr=nCr(n,r);

cout<<ncr;


}