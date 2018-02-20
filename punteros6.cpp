#include<stdio.h>
using namespace std;
//MANEJODE MEMORIA  
int main(){
    //DECLARO UN NUEVO TIPO DE DATO
       char palabra1[6];
       char palabra2[6];
       int salir;
       printf("Dime algo: ");
       scanf("%s",palabra1);
       printf("Dime algo más: ");
       scanf("%s",palabra2);       
       printf("dirección palabra1 = %x",palabra1+0);
       //\n es un retorno de carro
       printf("palabra1 = %c\n",*palabra1);
       printf("dirección palabra2 = %x",palabra2);
       printf("palabra2 = %c\n",*palabra2);
       printf("palabra1 = %c\n",*(palabra1+1));
       printf("palabra2 = %c",*(palabra2+1));
       scanf("%i",&salir);
       }
