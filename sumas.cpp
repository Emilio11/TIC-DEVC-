#include<iostream>
using namespace std;
//arrays nigga
int main(){
    int pepito[5],cont,salir;
    int suma=0;
    for (cont=0; cont<5;cont++){
        cout<<"Dime un número: ";
        cin>>pepito[cont];
    }
    //ahora sumamos
    cout<<"La suma vale: ";
    for (cont=0;cont<5;cont++){
        suma=suma+pepito[cont];
    }
    cout<<suma;
    cout<<"Toca cualquier tecla";
    cin>>salir;
}
