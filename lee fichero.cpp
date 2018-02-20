#include<iostream>
#include<fstream>
using namespace std;
//FICHEROS
int main(){
    //abrimos fichero
    int salir;
    string mensaje;
    ifstream fichero("miFichero.txt");
    fichero>>mensaje;
    cout<<mensaje<<endl;   
    cout<<endl<<"Hemos acabado";    
    cin>>salir;
    return 0;
}  
 
