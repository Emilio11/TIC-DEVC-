#include<iostream>
/*Este programa sirve para leer tres n�meros enteros y devolver el mayor*/
int main(){
    //Introducimos las variables
    int n1,n2,n3,salir;
    std::cout<<"Escribe el primer n�mero; ";
    std::cin>>n1; 
    std::cout<<"Escribe el segundo n�mero; ";
    std::cin>>n2;
    std::cout<<"Escribe el tercer n�mero; ";
    std::cin>>n3;
    if(n1>n2){
      if(n1>n3){
        std::cout<<"El primer n�mero es el mayor de los tres";
      }
      else{
        if(n1<n3)
        std::cout<<"El segundo n�mero es el mayor de los tres";
      }
    }                  
    else {
         std::cout<<"El tercer n�mero es el mayor de los tres";
    }
    std::cout<<"Toca cualquier tecla para salir: ";
    std::cin>>salir;
    return 0;     
} 
