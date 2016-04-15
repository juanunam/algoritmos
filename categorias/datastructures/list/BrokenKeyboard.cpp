#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<string>
#include<list>
using namespace std;
list<char> lista;
list<char>::iterator it;
int main(){

  string linea;
  bool escola=false;
  int tamano;
  while(getline(cin,linea)){
    lista.clear();
    tamano=linea.size();
    for(int i=0;i<tamano;i++  ){
      //  printf("%c",a);
      if(linea[i]=='['){
        escola=true;

        it=lista.begin();
      }else if(linea[i]==']' ){
        escola=false;

      }else if(escola ){
        lista.insert(it,linea[i]);

      }else {
        lista.push_back(linea[i]);
      }
    }

    for (it = lista.begin(); it != lista.end(); it++) {
  			printf("%c", *it);
  		}
    printf("\n");

  }
  return 0;
}
