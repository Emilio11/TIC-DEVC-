#include<iostream>
#include<fstream>
#include<string>
using namespace std;
//FICHEROS lee completo
int main(){
    //abrimos fichero
    int salir;
    int repetir=0;
    string nombre;
    string linea;
    cout<<"Dime el nombre del fichero ";
    getline(cin,nombre);    
    ifstream fichero(nombre.c_str());
    do{
    getline(cin,nombre);    
    ifstream fichero(nombre.c_str());
    //cout<<"El texto dice: ";
    if (fichero.fail()==1){
       cout<<"ERROR BITCH DETECTED";
       getline(cin,nombre);    
       ifstream fichero(nombre.c_str());
       cin>>salir;
       repetir=1;
    }else{
       repetir=0;
       }
       }while(repetir==1);
    while(fichero.eof()==0){
        getline(fichero,linea);
        cout<<linea;
        cout<<endl;
    }
    fichero.close();
    cout<<endl<<"Hemos acabado";    
    cin>>salir;
    return 0;
}  
