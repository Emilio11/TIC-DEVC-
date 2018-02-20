#include<iostream>
/*Este programa sirve para leer 10 números enteros y devolver el mayor*/
int main(){
   //Usaremos bucles
   //Definición de variables
   int cont,numero,salir,suma;
   suma=0;
   //Bucle de tipo for;;;; cont=cont+1 -->> cont++
   // for(cont=1;cont=10;cont++){
   for(cont=1;cont<10;cont++){
         std::cout<< "Dime un número: ";
         std::cin>>numero;
         suma=suma+numero;
         }
   std::cout<<"La suma es: "<<suma;
   std::cout<<"Toca cualquier tecla";
   std::cin>>salir;
   return 0;
}
