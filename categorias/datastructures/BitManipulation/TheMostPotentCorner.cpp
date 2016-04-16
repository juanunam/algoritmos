#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
#include<list>
using namespace std;
int main(){

  int nodos[1<<15 ];
  int pesos[1<<15];
  int dimension;
  int N;
  while(scanf("%d",&N )!=EOF){
      for (int i = 0; i < 1 << N; i++) {
        scanf("%d",&nodos[i] );
      }
      for (int i = 0; i < 1 << N; i++) {
        pesos[i]=0;
         for (int vecino = 0; vecino <  N ; vecino++) {
            pesos[i]+=nodos[i^(1<<vecino)];
         }
      }
      int suma=0;
      for (int i = 0; i < 1 << N; i++) {
         for (int vecino = 0; vecino <  N ; vecino++) {
            suma=max(suma,pesos[i]+pesos[i^(1<<vecino)]);
         }
      }
      printf("%d\n",suma );

  }
  return 0;
}
