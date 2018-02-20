#include<iostream>
using namespace std;
//HACER ESTRUCTURAS
int main(){
    //DECLARO UN NUEVO TIPO DE DATO
    struct persona{
       string nombre;
       int edad;
       char colorPelo;
       };
       //declaro una variable de tipo persona
       int cont,salir;
       persona amigo[3];
       for(cont=0;cont<3;cont++){
       cout<<"Datos del amigo"<<cont<<endl;
       cout<<"¿Como se llama tu amigo?: ";
       cin>>amigo[cont].nombre;
       cout<<"¿Cuantos años tienes?: ";
       cin>>amigo[cont].edad;
       cout<<"¿De que color tiene el pelo?: ";
       cin>>amigo[cont].colorPelo;
}
       for(cont=0;cont<3;cont++){
       cout<<amigo[cont].nombre<<endl;
       cout<<amigo[cont].edad<<endl;
       cout<<amigo[cont].colorPelo<<endl;
       }
       cin>>salir;
       
}
