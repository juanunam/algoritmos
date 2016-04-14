#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<map>
#include<string>
#include<string.h>
#define TAM 100005
using namespace std;
typedef struct{
  int izq,der;
}nodo;
nodo nodos[TAM];
int main(){

    int vivos=0;
    int muertos=0;
    int matrizVivos[1000000];
int a,b;
    bool eslinea=false;
    string cadenas;
  //  scanf("%d %d",&vivos,&muertos);
    while(  scanf("%d %d",&vivos,&muertos) && !(!vivos && !muertos)  ){

     for(int i = 1; i <= vivos; i++){
                       nodos[i].izq= i-1;
                       nodos[i].der = i+1;
      }
      nodos[vivos].der=0;
      for (int i = 0; i < muertos; i++) {

        scanf("%d %d",&a,&b );

        if(nodos[a].izq)
          printf("%d ",nodos[a].izq);
        else
          printf("* ");
        if(nodos[b].der)
          printf("%d\n",nodos[b].der);
        else
        printf("*\n");
        nodos[nodos[a].izq].der= nodos[b].der;
        nodos[nodos[b].der].izq = nodos[a].izq;

      }
      eslinea=true;
      printf("-\n");


    }
    return 0;
}
