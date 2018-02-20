//Estructuras, siren para definir grupos de variables a la vez
#include<iostream>
#include<fstream>//voy a crear un fichero con toda la información y luego leerla
using namespace std;
int main(){
	int salir;
	
	struct persona{
		string nombre;
		int edad;
		string colorPelo;
		
	
	}; //con estructuras hay que poner ; detras de corchete
	
	persona amigo1;
	persona amigo2;
	
	
	cout<<"Dime el nombre de tu amigo: ";
	cin>>amigo1.nombre;
	
	cout<<"Dime su edad: ";
	cin>>amigo1.edad;
	
	cout<<"Dime su color de pelo: ";
	cin>>amigo1.colorPelo;
	
	cout<<"Dime el nombre de tu amigo: ";
	cin>>amigo2.nombre;
	
	cout<<"Dime su edad: ";
	cin>>amigo2.edad;
	
	cout<<"Dime su color de pelo: ";
	cin>>amigo2.colorPelo;
	
	string mensaje;
	ofstream f("Amigos.txt");
	f<<amigo1.nombre<<endl;
	f<<amigo1.edad<<endl;
	f<<amigo1.colorPelo<<endl;
	
	f<<amigo2.nombre<<endl;
	f<<amigo2.edad<<endl;
	f<<amigo2.colorPelo<<endl;
	
	
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
