#include <iostream>
using namespace std;

int main(){
 
 int a=2;
 int b=4;

 bool equal= a==b;
 bool greater= a>b;
 bool lesser= a<b;
 bool greaterThanEqual= a>=b;
 bool lesserThanEqual= a<=b;
 bool notEqual= a!=b;
 
 cout << equal  << endl;                //false
 cout << greater  << endl;              //false
 cout << lesser  << endl;               //true    
 cout << greaterThanEqual  << endl;     //false
 cout << lesserThanEqual  << endl;      //true 
 cout << notEqual  << endl;             //true 


}