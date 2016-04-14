#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<map>
#include<string>
using namespace std;

int main(){

    int casos=0;
    int pago=0;
    int costos=0;
    int lineas=0;

    string cadenas;
    scanf("%d",&casos);
    while(casos--){
          double costo=0;
          cadenas="";
          map<char,int> costosMapa;
          scanf("%d",&costos );
          char caracter;
          int peso;
          for (int i = 0; i < costos; i++) {
            cin>>caracter>>peso;
            getline(cin,cadenas);
            costosMapa[caracter]=peso;
          }
          scanf("%d",&lineas);
            getchar();

          for (int i = 0; i < lineas; i++){
            string cadena;
            getline(cin,cadena);
            //cadenas+=cadena;
            for (int k = 0; k < cadena.size(); k++) {
                if(costosMapa[cadena[k]]){
                  costo+=costosMapa[cadena[k]];
                }
            }
          }


          printf("%.2f$\n",costo/100);

    }
    return 0;
}
