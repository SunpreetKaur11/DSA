#include <iostream>
#include <math.h>
using namespace std;

bool isEven(int n)
{
 //odd
 if(n&1)
 {
  return 0;
 }
 return 1;


}


int main()
{

int n;
cin>>n;
if (isEven(n))

{
    cout<<"Even";
    }

else
{
    cout<<"Odd";
}



}