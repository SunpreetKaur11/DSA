#include <iostream>
#include <math.h>
using namespace std;


int update(int n)
{
    n-=5;
    return n;
}


int main()
{

int a=15;

update(a);

cout<<a;


}