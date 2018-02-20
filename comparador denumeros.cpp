#include<iostream>
/*Este programa sirve para leer tres números enteros y devolver el mayor*/
int main(){
    //Introducimos las variables
    int n1,n2,n3,salir;
    std::cout<<"Escribe el primer número; ";
    std::cin>>n1; 
    std::cout<<"Escribe el segundo número; ";
    std::cin>>n2;
    std::cout<<"Escribe el tercer número; ";
    std::cin>>n3;
    if(n1>n2){
      if(n1>n3){
        std::cout<<"El primer número es el mayor de los tres";
      }
      else{
        if(n1<n3)
        std::cout<<"El segundo número es el mayor de los tres";
      }
    }                  
    else {
         std::cout<<"El tercer número es el mayor de los tres";
    }
    std::cout<<"Toca cualquier tecla para salir: ";
    std::cin>>salir;
    return 0;     
} 
