#include<iostream>
#include<fstream>
using namespace std;
//FICHEROS lee completo con comprobador
int main(){
    //abrimos fichero
    int salir;
    string mensaje;
    ifstream fichero("miFichero.txt");
    cout<<"El texto dice: ";
    while(fichero.eof()!=1){    
        getline(fichero,mensaje);
        if (fichero.eof()!=1){
        cout<<mensaje;
        cout<<endl;
        }
    }
    cout<<endl<<"Hemos acabado";    
    cin>>salir;
    return 0;
}  
 
