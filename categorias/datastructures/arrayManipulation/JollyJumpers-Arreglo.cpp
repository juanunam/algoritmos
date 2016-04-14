#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main(){

    int numeros=0;
    int arreglo[4000];
    int absolutos[4000];
    while(scanf("%d",&numeros) != EOF){

      for (int i = 0; i < numeros; i++) {
        scanf("%d",&arreglo[i]);

      }
      for (int i = 1; i < numeros; i++) {
          absolutos[i]=abs(arreglo[i]-arreglo[i-1]);

      }
      sort(absolutos+1,absolutos+numeros);
      bool ganador=true;

      for (int i = 1; i < numeros; i++) {

              if(i!=absolutos[i]){
                  ganador=false;
                  i=numeros;
                }


      }
      if(!ganador)
        printf("Not jolly\n");
      else
        printf("Jolly\n");
    }
    return 0;
}
