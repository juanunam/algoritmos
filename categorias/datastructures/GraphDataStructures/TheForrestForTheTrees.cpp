#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
#include<cmath>
#include<sstream>
#include<vector>
using namespace std;


int main(){

  int casos;
  int arboles,solos,a,b,aristas,vertices;
  string linea;

      int  nodos[26];
  scanf("%d",&casos);

  getline(cin,linea);
  while(casos--){

    memset(nodos,0,sizeof(nodos));
    arboles=0;
    solos=0;
    aristas=0;
    vertices=0;
    getline(cin,linea);
    while(linea[0]!='*'){
      a=linea[1]-'A';
      b=linea[3]-'A';
      nodos[a]++;
      nodos[b]++;
      getline(cin,linea);
      aristas++;

    }
    getline(cin,linea);
    for(int i=0;i<linea.size();i=i+2){
      if(nodos[linea[i]-'A']==0)
        solos++;
      vertices++;
    }
    arboles=vertices-aristas-solos;
    printf("There are %d tree(s) and %d acorn(s).\n",arboles,solos );
  }
    return 0;
}
