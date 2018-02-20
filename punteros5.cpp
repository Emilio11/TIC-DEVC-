#include<stdio.h>
using namespace std;
//MANEJODE MEMORIA  
int main(){
    //DECLARO UN NUEVO TIPO DE DATO
       char palabra1[5];
       char palabra2[5];
       int salir;
       printf("Dime algo: ");
       scanf("%s",palabra1);
       printf("Dime algo más: ");
       scanf("%s",palabra2);       
       printf("dirección palabra1 = %x",palabra1);
       printf("palabra1 = %s\n",palabra1);
       printf("dirección palabra2 = %x",palabra2);
       printf("palabra2 = %s",palabra2);
       scanf("%i",&salir);
       }
