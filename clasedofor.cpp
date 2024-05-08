#include <iostream>
using namespace std;

int main (){
  
  char letra;
  do
  {
    cout<< "Escoje una letra A,B,C,D,E para elegir tu almuerzo:\n";

    cout<<"A.Sopa\n";
    cout<<"B.Ensalada\n";
    cout<<"C.Hamburguezas\n";
    cout<<"D.Carne a la plancha\n";
    cout<<"E.Pescado frito\n";
    cout<<"Almuerzo seleccionado:";
    cin>>letra;

    
  } while (letra !='X');
   



 return 0;
}