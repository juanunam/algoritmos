#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<string>
#include<iostream>
using namespace std;

 int main(int argc, char const *argv[]) {
   string cadena;
   while(getline(cin,cadena) ){
     int words=0,espacio=0;
     for (int i = 0; i < cadena.size(); i++) {
        if((cadena[i]>='a'&&cadena[i]<='z')==(cadena[i]>='A'&&cadena[i]<='Z')){
          if(espacio==1){
            espacio=0;
          }

        }else{
          if(espacio==0){
            espacio=1;
            words++;
          }
        }

     }
     
     printf("%d\n",words );

   }

  return 0;
}
