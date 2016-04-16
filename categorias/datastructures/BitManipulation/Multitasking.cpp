#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
#include<list>
using namespace std;
int main(){

  int n,m,a,b,c;
  bool ocupado[1000000+1];
  bool flag=true;
  scanf("%d %d",&n,&m );
  while(n!=0 || m!=0){
    flag=true;
    memset(ocupado,false,sizeof(ocupado));
    for (int i = 0; i < n; i++) {

      scanf("%d",&a );
      scanf("%d",&b );
      for (int k = a; k < b; k++) {
          if(ocupado[k]){
            printf("CONFLICT\n");
            flag=false;
            k=b;
            i=n;
          }else{
            ocupado[k]=true;
          }
      }
    }

    for (int i = 0; i < m; i++) {

      scanf("%d",&a);
      scanf("%d",&b);
      scanf("%d",&c);

      while(a<1000000 && flag){
        for (int k = a; k < b ; k++) {
          if(ocupado[k]){
            printf("CONFLICT\n");
            k=b;
            flag=false;
          }else{
            ocupado[k]=true;
          }
        }

        a=a+c;
        b=min(b+c,1000000);

      }


    }


      if(flag)
        printf("NO CONFLICT\n" );

      scanf("%d %d",&n,&m );


    }
    return 0;
}
