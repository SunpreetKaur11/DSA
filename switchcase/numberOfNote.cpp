#include <iostream>
using namespace std;
int main(){


int cash;
cout<<"Enter the value";
cin>>cash;

int leftover;


int hNotes=cash/100;;
leftover=cash-(hNotes*100);
cout<<"100 rupees notes: "<<hNotes<<endl;

int fNotes=leftover/50;;
leftover=leftover-(fNotes*50);
cout<<"50 rupees notes: "<<fNotes<<endl;

int tNotes=leftover/20;;
leftover=leftover-(tNotes*20);
cout<<"20 rupees notes: "<<tNotes<<endl;            

int oNotes= leftover/1;
cout<<"1 rupees notes: "<<oNotes<<endl; 
    




}