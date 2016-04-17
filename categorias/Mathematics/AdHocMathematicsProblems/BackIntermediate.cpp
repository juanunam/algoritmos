#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;
int main(){

  int casos=0,d,v,u,i=1;
  scanf("%d",&casos );
  while(i<=casos){
    scanf("%d %d %d",&d,&v,&u );
    printf("Case %d: ",i );
    if( u == 0 || v >=u){
      printf("can't determine\n");
    }else{
      float primera=(float)d/(float)u;
      float divisor=(float)((u*u)-(v*v));
      divisor=sqrt(divisor);
      float dividendo=(float)d;
      float segunda=dividendo/divisor;


      printf("%.3f\n",fabs(segunda-primera) );

    }
    ++i;
  }
    return 0;
}
