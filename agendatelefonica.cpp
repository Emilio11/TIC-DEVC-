#include<iostream>
#include<fstream>
using namespace std;
//FICHEROS lee completo con comprobador
int main(){
    //abrimos fichero
    char otro='s';
    string nombre,numero;
    ofstream AgendaTelefonica("AgendaTelefonica.txt");
    while(otro=='s'){
    cout<<"Introduce el nombre completo del contacto: ";
    cin>>nombre;
    cout<<"Introduce el numero telefónico del contacto: ";
    cin>>numero;
    AgendaTelefonica<<nombre<<","<<endl;        
    cout<<"Deseas introducir otro amigo (s/n)?: ";                
    cin>>otro;
    }
    char otro='n'
    while(otro=='n'){
    cout<<"¿Deseas ver tu lista de contactos (s/n)?";
    cin>>otro;
    }
    while(fichero.eof()!=1){    
        getline(fichero,mensaje);
        if (fichero.eof()!=1){
        cout<<AgendaTelefonica;
        cout<<endl;
        }
    
    cout<<endl<<"Hemos acabado";    
    cin>>salir;
    return 0;
}  
 
