#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
#include<list>
using namespace std;
int main(){

//  unsigned  long int numero=4294967296 ;
  unsigned long int numero;
  unsigned long int a;
  unsigned long int b;
  int intervalo=0;
  bool siguiente=true;
  while(scanf("%ld",&numero )!=EOF &&  numero!=0){
    siguiente=true;
    a=0;
    b=0;
    intervalo=0;
    while (numero>0) {
      if(numero%2!=0){
        if(siguiente)
          a+=1<<intervalo;
        else
          b+=1<<intervalo;

        siguiente=not siguiente;
      }
      numero=numero>>1;
      ++intervalo;

    }
    printf("%ld %ld\n",a,b );
  }
    return 0;
}
