//Matriz. 3x3. Int matriz[3][3]
#include<iostream>
using namespace std;
int main(){
	int salir;
	int matriz[3][3];
	int cont,cont2;
	for(cont=0;cont<3;cont++){
		for(cont2=0;cont2<3;cont2++){
		cout<<"Dime la posicion"<<cont<<","<<cont2<<": ";
		cin>>matriz[cont][cont2];	
			
		}
	}
	
	for(cont=0;cont<3;cont++){
		for(cont2=0;cont2<3;cont2++){
		cout<<matriz[cont][cont2];
			
		}
		cout<<endl;
	}
	cin>>salir;
	return 0;
	
}
