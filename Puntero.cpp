//Punteros, es una variable que tiene guardada la dirección de otra variable

#include<stdio.h> //se usa esta librría porque son punteros


int main(){
	int salir;
	int b,c;
	int *a;
	b=12;
	c=18;
	
	a=&b; // & aspersan significa dirección, a va a cotener la dirección de b
	//*a=b; // * significa puntero
	
	// las dos líneas anteriores significan lo mismo, es lo mismo poner una que la otra
	
	printf ("Hola"); // printf=cout
	printf("\nHola tengo %i años y mi hermano %i años",b,c); // %i es un carácter comodín que se sustituye por la variable que está detrás de la coma
//	scanf("%i",&b); //scanf = cin, aprender de memoria %i,&variable
	
//	%i  número entero
//	%c letra
//	%f float (número decimal)
//	%x hexadecimal
//	%s string (es una cadena de carácteres)

	//declaración de punteros, son direcciones
	char*puntero;
	
	printf("\n%i\n",&puntero); // me da la dirección en números enteros guardada en puntero
	printf("%x",&puntero); //me da la dirección en hexadecimal guardada en puntero
//	printf("%c",*puntero); //esto me da el carácter de la direccción guardada en puntero
	scanf("%i",salir);
	return 0;
}
