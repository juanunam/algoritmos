#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;
int main(){

  int numero,suma=0;

  scanf("%d",&numero);
  printf("PERFECTION OUTPUT\n");
  while(numero!=0){
    suma=0;
    int raiz=sqrt(numero);
    if(numero!=1)
    for (int i = 1; i <= raiz; i++) {
      if(numero%i==0){
        suma+=i;
        if(i!=1 && i*i != numero ){
          suma+=numero/i;
        }
       //  suma+=numero/i;
      }
    }
    if(suma<numero)
    printf("%5d  DEFICIENT\n",numero );
    else if(suma>numero)
    printf("%5d  ABUNDANT\n",numero );
    else
    printf("%5d  PERFECT\n",numero );
    scanf("%d",&numero);
  }

  printf("END OF OUTPUT\n" );
  return 0;
}
