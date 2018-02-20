///////algoritmos de ordenacion
//metodo de la burbuja;si o no



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
//MANEJO DE PUNTEROS  
int medida(char aux[]){
    int l=0;
    while(aux[l]!='\0'){
            l++;
            }
    return l;
}
int main(){
    char aux[2l];//numero de letras del amigo con el nombre más largo
    char *lauxilio;
    char *lista[20];
    int salir;
    int cont,l,nveces;
    //memory allocation = malloc
    //reserve ocho veces el tamo de la letra ---> m e l c h o r \0----> 7+1 letras
    //(char*)nosdael huecoadecuado al tamaño
    for(cont=0;cont<5;cont++){
                              printf("\nNombre amigo %i: ",cont);
                              scanf("%s",aux);
                              l=medida(aux);
                              printf("%i\n",l);
                              lista[cont]=(char *) malloc(1*sizeof(char));
                              strcpy(lista[cont],aux);
    }
    printf("MIS AMIG@S SON:");
    for(cont=0;cont<5;cont++){
                              printf("\n%s",lista[cont]);
                              }            
    //ordenamiento
    for(nveces=1;nveces<5;nveces++){
    for(cont=0;cont<4;cont++){
                              if (*lista[cont]>*lista[cont+1]){
                                                               printf("\nCambio %s por %s");
                                                               lauxilio=lista[cont];
                                                               lista[cont]=lista[cont+1];
                                                               lista[cont+1]=lauxilio;
                                                               } 
                                                               }
                                                               }                                                       
    printf("\nLA LISTA ORDENADA:");
    for(cont=0;cont<5;cont++){
                              printf("\n%s",lista[cont]);
                              }
    printf("\nToca cualquier tecla para salir: ");
    scanf("%i",&salir);
}
