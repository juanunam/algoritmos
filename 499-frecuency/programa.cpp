#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<string>
#include<iostream>
using namespace std;

 int main(int argc, char const *argv[]) {
   string cadena;
   int letrasMinusculas[30];
   int letrasMayusculas[30];
   char cadenota[1000000];
   while(gets(cadenota) ){
     cadena=cadenota;
     int words=0,espacio=0;
     memset(letrasMinusculas,0,sizeof letrasMinusculas);
     memset(letrasMayusculas,0,sizeof letrasMayusculas);
     string matriz[cadena.size()+10];
     for (int i = 0; i <= cadena.size(); i++) {
       matriz[i]="";
     }
     for (int i = 0; i < cadena.size(); i++) {
        if(cadena[i]>='a'&&cadena[i]<='z'){
              letrasMinusculas[cadena[i]-'a']++;
              matriz[letrasMinusculas[cadena[i]-'a']]+=cadena[i];
        }if(cadena[i]>='A'&&cadena[i]<='Z'){

                letrasMayusculas[cadena[i]-'A']++;
                matriz[letrasMinusculas[cadena[i]-'A']]+=cadena[i];
        }

     }
     for (int i = cadena.size(); i >= 0; i--) {
        if(matriz[i]!=""){

          char a[matriz[i].size()];
          char b[matriz[i].size()];
          strcpy(a,"");
          strcpy(b,"");
          for(int k='A';k<='Z';k++){
              for (int l = 0; l < matriz[i].size(); l++) {
                  if( matriz[i][l]==k)
                    printf("%c", matriz[i][l]);
              }
          }
          for(int k='a';k<='z';k++){
              for (int l = 0; l < matriz[i].size(); l++) {
                if( matriz[i][l]==k)
                    printf("%c", matriz[i][l]);
                }
          }

          printf(" %d\n",i);
          i=-1;

        }
     }

   }

  return 0;
}
