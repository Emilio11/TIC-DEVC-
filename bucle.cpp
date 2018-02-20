
23#include<iostream>
/*Este programa sirve para leer 10 números enteros y devolver el mayor*/
int main(){
   //Usaremos bucles
   //Definición de variables
   int cont,numero,mayor,salir;
   mayor=0;
   //Bucle de tipo for;;;; cont=cont+1 -->> cont++
   // for(cont=10;cont>=0;cont--){
   std::cout<< "Dime un número: ";
   for(cont=1;cont<10;cont++){
         std::cout<< "Dime un número: ";
         std::cin>>numero;
         if(numero>mayor){
           mayor=numero;
           }
   }
   std::cout<<"El mayor es: "<<mayor;
   std::cout<<"Toca cualquier tecla";
   std::cin>>salir;
   return 0;
}
