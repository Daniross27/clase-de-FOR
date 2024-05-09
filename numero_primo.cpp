#include <iostream>
using namespace std;
int main (){

int n=0,i=0,resultado=0;
 cout<<"Digite un numero entero: ";
 cin>>n;
 for ( i =n-1; i >=2; i--)
 {
    resultado =n%i;
 }
 if (resultado == 0){

    cout<<"Su numero no es primo";
 }
 else if(resultado == 1){

    cout<<"Su numero es primo";
 }
 
return 0;
}