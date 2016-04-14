#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<string>
#include<iostream>
using namespace std;
int cuota=0;
 int main(int argc, char const *argv[]) {
   string cadena;
   while(getline(cin,cadena) ){
     for (int i = 0; i < cadena.size(); i++) {

       if(cadena[i]=='"'){
         if(cuota%2==0)
          cadena.replace(i,1,"``");
        else
          cadena.replace(i,1,"''");

          cuota++;

       }
     }

     printf("%s\n",cadena.c_str());
   }
  return 0;
}
