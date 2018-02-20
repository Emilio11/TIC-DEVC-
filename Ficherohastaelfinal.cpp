//fichero hasta el final, como hay que eer todas las líneas se mete una nueva función que es fichero.eof que te devuelve 0 o 1, si es 1 es que esta en el final del fichero
#include<iostream>
#include<fstream>
using namespace std;
int main (){
	int salir;
	string mensaje;
	ifstream fichero("miFichero.txt");
	cout<<"El texto dice: \n";
	while(fichero.eof()!=1){  //  != distinto de    ==igual a     =defines valor
		getline(fichero,mensaje); //getline coge la linea y la mete dentro de mensaje
		if(fichero.eof()!=1){
			cout<<mensaje<<endl;
		}
	}
	
	
	cout<<"Pulsa cualquier tecla para salir y pulsa enter: ";
	fichero.close();
	cin>>salir;
	return 0;
}
