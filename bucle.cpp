
23#include<iostream>
/*Este programa sirve para leer 10 n�meros enteros y devolver el mayor*/
int main(){
   //Usaremos bucles
   //Definici�n de variables
   int cont,numero,mayor,salir;
   mayor=0;
   //Bucle de tipo for;;;; cont=cont+1 -->> cont++
   // for(cont=10;cont>=0;cont--){
   std::cout<< "Dime un n�mero: ";
   for(cont=1;cont<10;cont++){
         std::cout<< "Dime un n�mero: ";
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
