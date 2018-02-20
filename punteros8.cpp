#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
//MANEJO DE PUNTEROS  
int main(){
    char aux[20];//numero de letras del amigo con el nombre más largo
    char *lista[15];
    int salir;
    int cont,l;
    //memory allocation = malloc
    //reserve ocho veces el tamo de la letra ---> m e l c h o r \0----> 7+1 letras
    //(char*)nosdael huecoadecuado al tamaño
    for(cont=0;cont<5;cont++){
    printf("\nNombre amigo %i: ",cont);
    scanf("%s",aux);
    l=15;//l=medida(aux);
    lista[cont]=(char *) malloc(1*sizeof(char));
    strcpy(lista[cont],aux);
    }
    printf("MIS AMIG@S SON:");
    for(cont=0;cont<5;cont++){
                              printf("\n%s",lista[cont]);
                              }            
    printf("\nToca cualquier tecla para salir: ");
    scanf("%i",&salir);
    
}
