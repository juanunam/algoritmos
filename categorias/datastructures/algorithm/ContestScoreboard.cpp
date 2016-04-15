#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
#include<string>
#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
vector<int> participantes;
int resueltos[101][10],penalisaciones[101][10];

bool comparar(int i,int j){
  int isolve=0, ip=0, jsolve=0, jp=0;
   for(int a=0; a<10; a++) if(resueltos[i][a]) {
 ip += penalisaciones[i][a];
 isolve++;
   }
   for(int a=0; a<10; a++) if(resueltos[j][a]) {
 jp += penalisaciones[j][a];
 jsolve++;
   }
   if(isolve > jsolve) return true;
   else if(isolve < jsolve) return false;
   else {
 if(ip < jp) return true;
 else if(ip > jp) return false;
 else return i < j;
   }

}

int main(){

  int casos=0,id,p,t;
  char L;
  string linea;
  scanf("%d",&casos );
  getline(cin,linea);
  getline(cin,linea);
  while(casos--){
    participantes.clear();
    memset(resueltos,0,sizeof(int)*101*10);
    memset(penalisaciones,0,sizeof(int)*101*10);
    while (getline(cin,linea),linea.size()>0) {
      stringstream separador(linea);
      separador>>id>>p>>t>>L;
      if(L=='I'&& !resueltos[id][p]){
        penalisaciones[id][p]+=20;
      }else if(L=='C'){
        if(!resueltos[id][p]){
          penalisaciones[id][p]+=t;
        }
        resueltos[id][p]=1;
      }
      if(find(participantes.begin(), participantes.end(), id) == participantes.end())
        participantes.push_back(id);
    }
    sort(participantes.begin(),participantes.end(),comparar);
    for(int k:participantes){
      int s=0, p=0;
      for(int i=0; i<10; i++)
      if(resueltos[k][i]) {
        p+=penalisaciones[k][i];
        s++;
      }
      printf("%d %d %d\n", k, s, p);
    }
    if(casos > 0) printf("\n");

  }
  return 0;
}
