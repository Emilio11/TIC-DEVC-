#include<iostream>
#include<fstream>
using namespace std;
//FICHEROS lee completo
int main(){
    //abrimos fichero
    int salir;
    string linea;
    ifstream fichero("retr7iko.docx");
    //cout<<"El texto dice: ";
    if (fichero.fail()==1){
       cout<<"ERROR BITCH DETECTED";
       cin>>salir;
       exit(1);
       }
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
