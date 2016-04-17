#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
#include<cmath>
#include<sstream>
#include<queue>
using namespace std;

cd
int main(){

  int numero,suma=0,a;
  scanf("%d",&numero);
  while(numero!=-1){

     a=0;
     int raiz=sqrt(numero);
    for (int i = 1; i <= numero; i++) {
      int sumatoria=(i*(i+1))/2;
      int sumatoriaA=(a*(a+1))/2;
          while (sumatoria -sumatoriaA > numero) {
            a++;
             sumatoriaA=(a*(a+1))/2;
          }

        if(sumatoria-sumatoriaA==numero){
          printf("%d = %d + ... + %d\n",numero,a+1,i );
          i=numero+1;
        }
     }
    scanf("%d",&numero);
  }
    return 0;
}
