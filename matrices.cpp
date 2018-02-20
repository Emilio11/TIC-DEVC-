#include<iostream>
using namespace std;
//MATRICES
int main(){
    int matriz[3][3];
    int fila,col,salir;
    for (fila=0;fila<3;fila++){
        for (col=0;col<3;col++){
            cout<<"matriz["<<fila<<"]["<<col<<"]";
            cin>>matriz[fila][col];
        }
    }
    cout<<endl<<"Hemos acabado";
    cin>>salir;
    return 0;
}    
