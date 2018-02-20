//Estructuras, siren para definir grupos de variables a la vez
#include<iostream>
#include<fstream>//voy a crear un fichero con toda la información y luego leerla
using namespace std;
int main(){
	int salir;
	int cont;
	struct persona{
		string nombre;
		int edad;
		string colorPelo;
		
	
	}; //con estructuras hay que poner ; detras de corchete
	
	persona amigo[5];
	
	for(cont=0;cont<5;cont++){
	
	
	cout<<"Dime el nombre de tu amigo: ";
	cin>>amigo[cont].nombre;
	
	cout<<"Dime su edad: ";
	cin>>amigo[cont].edad;
	
	cout<<"Dime su color de pelo: ";
	cin>>amigo[cont].colorPelo;
	
}

	string mensaje;
	ofstream f("Amigos.txt");
	
	for(cont=0;cont<5;cont++){	
	f<<amigo[cont].nombre<<endl;
	f<<amigo[cont].edad<<endl;
	f<<amigo[cont].colorPelo<<endl;
	
}
	
	f.close();



	ifstream f2("Amigos.txt");
	while (f2.eof()!=1){
	getline (f2,mensaje);
	if (f2.eof()!=1){
		cout<<mensaje<<endl;
		
	}		
		
	}
	
	f2.close();
	
	
	cin>>salir;
	return 0;
}
