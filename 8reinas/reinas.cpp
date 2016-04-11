#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<string.h>

using namespace std;

string resultado1="1 0 0 0 0 0 0 0";
int resultado=1;

void recursividad(int posicion){

     if(posicion==8){
        if(resultado<=9){
            printf(" %d      %s\n",resultado,resultado1.c_str());

        }else{
            printf("%d      %s\n",resultado,resultado1.c_str());

        }
        resultado++;
    }
    else if(resultado1[posicion+posicion]=='0'){
        for(int j=0;j<8;j++){

            bool hacerlo=true;
            for(int i=0;i<16;i=i+2){
                if((i/2)!=posicion){
                    int auxiliar=resultado1[i]-'0';
                    if(auxiliar!=0){
                     float pendiente=0;
                        if(auxiliar-j-1!=0)
                         pendiente=((float)((i/2)-(posicion)))/((float)(auxiliar-j-1));
                        if(auxiliar == j+1  || pendiente== -1.0f || pendiente== 1.0f){
                            hacerlo=false;
                            i= 16;
                        }
                    }
                }
            }
            if(hacerlo){
                resultado1[posicion+posicion]='0'+(j+1);

                recursividad(posicion+1);
                resultado1[posicion+posicion]='0';
            }

        }
    }else{
        recursividad(posicion+1);
    }

}
int main(){
    int casos=0;
    scanf("%d",&casos);
     bool blank = false;
    while(casos--){
        int a=0,b=0;
        scanf("%d %d",&a,&b);
        resultado1="0 0 0 0 0 0 0 0";
        resultado1[(a-1)*2]='0'+b;
        resultado=1;
         if ( blank )
        {
            printf("\n");
        }
        blank = true;
        printf("SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n\n");

        recursividad(0);
    }

    return 0;
}
