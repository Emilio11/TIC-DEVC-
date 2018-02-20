#include<iostream>
using namespace std;
//VECTORES
int main(){
    int vector[5],vector1[5],suma[5],u,v,w,salir;
    for (u=0;u<5;u++){
        cout<<"Introduce las coordenadas de tu primer vector:";
            cin>>vector[u];
        }
    for (v=0;v<5;v++){
        cout<<"Introduce las coordenadas de tu segundo vector:";
            cin>>vector1[v];
        }
    cout<<"Este es el vector suma: (";
    for (w=0;w<5;w++){ 
        suma[w]=vector[w]+vector1[w];
        cout<<suma[w]<<",";
        }
    cout<<")";    
    cout<<endl<<"Hemos acabado";
    cin>>salir;
    return 0;
}    
