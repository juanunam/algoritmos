#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string.h>
#include <queue>
using namespace std;
    bool ganador;
bool disponibles[10];
int length;
char numerosPosibles[10*9*8*7*6+100][5+3];
char cadena[8];
void recursiva(int numero){
    if(numero==5){
     cadena [5] = 0;
        strcpy(numerosPosibles[length],cadena);

        length++;
        return;
    }
    int i=0;
    for(i=0;i<=9;i++){
        if(disponibles[i]){
            disponibles[i]=false;
            cadena[numero]= i+'0';
            recursiva(numero+1);
            disponibles[i]=true;
        }

    }
}
void verifica(char *p,int b,int n){
     bool available [10 + 2];
    memset (available, false, sizeof(available));

    char pch [10];
    sprintf (pch, "%d", b);

    for ( int i = 0; i < 5; i++ ) {
        available [p [i] - '0'] = true;
        available [pch [i] - '0'] = true;
    }

    for ( int i = 0; i < 10; i++ ) {
        if ( !available [i] ) return;
    }

    ganador = true;
    printf ("%s / %s = %d\n", pch, p, n);
}

int main(){
    queue<int> numerosPuestos;
    length=0;
    memset(disponibles,true,sizeof(disponibles));
    recursiva(0);
    int numero=1;
    while(numero!=0){

        scanf("%d",&numero);
        numerosPuestos.push(numero);
    }
    bool blanco =false;
    numerosPuestos.pop();
    while(!numerosPuestos.empty()){
        ganador=false;
        blanco=true;
        numero=numerosPuestos.front();
        numerosPuestos.pop();
        if(blanco){
           // printf("\n");
        }
                for(int i=0;i<30240;i++){
                 int num = atoi (numerosPosibles[i]);
                if ( num * numero < 100000 )
                 verifica(numerosPosibles[i],num*numero,numero);
                }

            if(!ganador)
            printf ("There are no solutions for %d.\n",numero);


    }
    return 0;

}
