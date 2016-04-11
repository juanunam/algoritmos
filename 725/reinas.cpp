#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<set>
int casos=0;
struct pares{
    int a;
    int b;
};
using namespace std;
void recursiva(string cadena,int tamano){
    if(tamano==8){
        printf("%s\n",cadena);
    }else if(cadena[tamano]!='0'){
        set<int> cuadros;
        set<pares> coordenadas;
        for(int i=0;i<8;i++){
            if(cadena[tamano]!='0'){
                cuadros.push(cadena[tamano]-'0');
                pares coordenada;
                coordenada.a=cadena[tamano]-'0';
                coordenada.b=i+1;
                coordenadas.push(coordenada);
            }
        }
        for(int i=0;i<8;i++){
        }
    }
}

int main(){
    cadena="10000000";
    recursiva(cadena,tamano);
}
