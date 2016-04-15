#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
#include<string>
#include<iostream>
using namespace std;

bool mayor(char a,char b){
  return (a>b);
}
int main(){

  string entrada;
  string copia;
  string copiaDos;
  bool ganador;
  getline(cin,entrada);
  while(entrada[0]!='#'){

    if(!next_permutation(entrada.begin(),entrada.end())){

        printf("No Successor\n");

    }else{

      printf("%s\n",entrada.c_str() );
    }
    getline(cin,entrada);
  }
  return 0;
}
