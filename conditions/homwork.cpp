#include <iostream>
using namespace std;

int main(){

//checking if the character is lowercase, uppercase, numeric or invalid.

char ch;
cout<<"taking input for ch: ";
cin>>ch;

if (ch>='a' && ch<= 'z'){ 
    cout<<"Lower case";
}
else if (ch>= 'A' && ch <= 'Z')
{
    cout<<"Upper case";
}
else if (ch>= '0' && ch <= '9')
{
    cout<<"Numeric";
}
else
{
    cout << "Invalid";
}

}