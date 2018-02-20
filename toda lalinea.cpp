#include<iostream>
#include<fstream>
using namespace std;
//FICHEROS lee completo
int main(){
    //abrimos fichero
    int salir;
    string mensaje;
    ifstream fichero("miFichero.txt");
    getline(fichero,mensaje);
    cout<<"La primera línea dice: "<<mensaje<<endl;   
    cout<<endl<<"Hemos acabado";    
    cin>>salir;
    return 0;
}  
 
