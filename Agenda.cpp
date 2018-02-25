//Voy a crear una agenda que guarde el nombre, edad, número de hermanos y lugar de nacimiento
#include<iostream>
#include<fstream>//voy a crear un fichero con toda la información y luego leerla
using namespace std;
int main(){
	int salir;
	int cont;
	struct persona{
		string nombre;
		int edad;
		int nhermanos;
		string nacimiento;
		
	
	}; //con estructuras hay que poner ; detras de corchete
	
	persona contacto[10];
	
	for(cont=0;cont<10;cont++){
	
	cout<<"DATOS CONTACTO "<<cont<<endl;
	
	cout<<"Dime su nombre: ";
	cin>>contacto[cont].nombre;
	
	cout<<"Edad: ";
	cin>>contacto[cont].edad;
	
	cout<<"Numero de hermanos: ";
	cin>>contacto[cont].nhermanos;
	
	cout<<"Lugar de nacimiento: ";
	cin>>contacto[cont].nacimiento;
	
}

	string mensaje;
	ofstream f("Agenda.txt");

	
	for(cont=0;cont<10;cont++){
		f<<contacto[cont].nombre<<endl;
		f<<contacto[cont].edad<<endl;
		f<<contacto[cont].nhermanos<<endl;
		f<<contacto[cont].nacimiento<<endl;
	
}
	
	f.close();



	ifstream f2("Agenda.txt");
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
