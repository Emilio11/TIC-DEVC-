#include<iostream>
using namespace std;
//arrays nigga
int main(){
    int pepito[5],cont,salir;
    
    for (cont=0; cont<5;cont++){
        cout<<"Dime un número: ";
        cin>>pepito[cont];
    }
    cout<<"Mira mi bonito vector relleno: ";
    for (cont=0;cont<5;cont++){
        cout<<"pepito["<<cont<<"]="<<pepito[cont]<<endl;
    }
    std::cout<<"Toca cualquier tecla";
    std::cin>>salir;
}
