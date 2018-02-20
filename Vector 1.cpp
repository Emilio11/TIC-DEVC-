//Vector, sirve para guardar más variables en una sola
#include<iostream>
using namespace std;
int main(){
	int salir;
	int vector[4];
	int cont;
	
	for(cont=0;cont<4;cont++){   // punto y coma entre unos cont y otros. Ponemos for para no repetir todo el rato cin>>vector[0] después 1...
	cout<<"Numero "<<cont+1<<": ";
	cin>>vector[cont];
	}
	
	for(cont=0;cont<4;cont++){
	cout<<"Numero "<<cont+1<<": "<<vector[cont]<<endl;		
	}
	
	cin>>salir;
	return 0;
	
}

//strings char[5]
