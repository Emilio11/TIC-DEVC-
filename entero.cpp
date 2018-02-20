#include<iostream>
#include<fstream>
using namespace std;
//FICHEROS lee completo
int main(){
    //abrimos fichero
    int salir;
    string mensaje;
    ifstream fichero("miFichero.txt");
    cout<<"El texto dice: ";
    for (int nlinea=0;nlinea<=2;nlinea++){
        getline(fichero,mensaje);
        cout<<mensaje;
        cout<<endl;
    }
    cout<<endl<<"Hemos acabado";    
    cin>>salir;
    return 0;
}  
 
