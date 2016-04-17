#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
#include<cmath>
#include<sstream>

using namespace std;


int main(){

  int numero,casos,media;
  int numeros[10];
  string cadena="";
  scanf("%d",&casos);
  while(casos--){
    ostringstream ostr;
    memset(numeros,0,sizeof(numeros));
    scanf("%d",&numero );
     cadena="";
    for (int i = 1; i <= numero; i++) {
        ostr<<i;
    }
    cadena=ostr.str();
    int tamano=cadena.size();
    for (int i = 0; i < tamano; i++) {
      numeros[cadena[i]-'0']++;
    }
    for (int i = 0; i <= 8; i++) {
      printf("%d ",numeros[i]);
    }
      printf("%d\n",numeros[9]);

  }
    return 0;
}
