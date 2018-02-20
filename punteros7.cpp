#include<stdio.h>
#include<stdlib.h> //malloc
using namespace std;
//MANEJO DE PUNTEROS  
int main(){
    char *lista[3];
    //memory allocation = malloc = guardar memoria
    //reserve ocho veces el tamo de la letra ---> m e l c h o r \0----> 7+1 letras
    //(char*)nosdael huecoadecuado al tamaño
    int salir;
    lista[0]=(char *) malloc(8*sizeof(char)); //sizeof es una función que devuelve el tamaño del tipo de variable
    lista[1]=(char *) malloc(7*sizeof(char)); //char* especifica a malloc que voy a guardar memoria para carácteres
    lista[2]=(char *) malloc(9*sizeof(char)); //lista[0] es la primera posición de la lista de punteros, (char*) insiste a malloc quee va a guardar espacio para letras.
	// malloc(x), guarda x de memoria en la ram. sizeof() te devuelve el tamaño de las variables.
	//sizeof(char) será el tamaño que oupa una letra
	
    printf("\nPrimer rey mago: ");
    scanf("%s",lista[0]);
    printf("\nSegundo rey mago: ");
    scanf("%s",lista[1]);
    printf("\nTercer rey mago: ");
    scanf("%s",lista[2]);
    printf("\nLos 3 reyes magos son: ");
    printf("%s, ",lista[0]);
    printf("%s, ",lista[1]);
    printf("%s, ",lista[2]);
	
	printf("%c",*(*(lista+1))+1);
    printf("\nToca cualquier tecla para salir: ");
    scanf("%i",&salir);
    
    }
    
