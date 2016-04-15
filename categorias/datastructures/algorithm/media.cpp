#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
#include<string>
#include<iostream>
#include<vector>
using namespace std;



int main(){


  vector<long int> enteros;
  long int numeroActual=0;
  int tamano=0;
  int media=0;
  while(scanf("%ld",&numeroActual)!= EOF){
    enteros.push_back(numeroActual);
    tamano=enteros.size();

      sort(enteros.begin(),enteros.end());
      if(tamano%2==1){
          media=enteros[((tamano+1)/2)-1];
      }else{
          media=(int)((enteros[((tamano)/2)-1]+enteros[((tamano)/2)])/(2));
      }

      printf("%d\n",media );
  }
  return 0;
}
