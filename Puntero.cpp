//Punteros, es una variable que tiene guardada la direcci�n de otra variable

#include<stdio.h> //se usa esta librr�a porque son punteros


int main(){
	int salir;
	int b,c;
	int *a;
	b=12;
	c=18;
	
	a=&b; // & aspersan significa direcci�n, a va a cotener la direcci�n de b
	//*a=b; // * significa puntero
	
	// las dos l�neas anteriores significan lo mismo, es lo mismo poner una que la otra
	
	printf ("Hola"); // printf=cout
	printf("\nHola tengo %i a�os y mi hermano %i a�os",b,c); // %i es un car�cter comod�n que se sustituye por la variable que est� detr�s de la coma
//	scanf("%i",&b); //scanf = cin, aprender de memoria %i,&variable
	
//	%i  n�mero entero
//	%c letra
//	%f float (n�mero decimal)
//	%x hexadecimal
//	%s string (es una cadena de car�cteres)

	//declaraci�n de punteros, son direcciones
	char*puntero;
	
	printf("\n%i\n",&puntero); // me da la direcci�n en n�meros enteros guardada en puntero
	printf("%x",&puntero); //me da la direcci�n en hexadecimal guardada en puntero
//	printf("%c",*puntero); //esto me da el car�cter de la direccci�n guardada en puntero
	scanf("%i",salir);
	return 0;
}
