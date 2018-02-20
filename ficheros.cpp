#include<iostream>
#include<fstream>
using namespace std;
//FICHEROS
int main(){
    //abrimos fichero
    ofstream fichero("miFichero.txt");
    fichero<<"En un lugar de la Mancha"<<endl;
    fichero<<"de cuyo nombre no quiero ...";
    fichero.close();
    cout<<"Ya está. Fichero cerrado.";   
    cout<<endl<<"Hemos acabado";    
    return 0;
}  
 
