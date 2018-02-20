//Ficheros con getline
#include<iostream>
#include<fstream>

using namespace std;
int main(){
	int salir;
	int cont;
	ifstream fichero("miFichero.txt"); //para leer el fichero
	string mensaje;
	for(cont=0;cont<5;cont++){
		getline(fichero,mensaje);//fichero es el nombre del string
		cout<<mensaje<<endl;
			
	}
	
	cin>>salir;
	return 0;
	
	
}
