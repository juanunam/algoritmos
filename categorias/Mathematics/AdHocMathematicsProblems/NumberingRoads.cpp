#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;
int main(){

  int a,b,casos=1;
  scanf("%d %d",&a,&b );
  while(a!=0||b!=0){
    printf("Case %d: ",casos );
    if(a>b*(1+26)){
      printf("impossible\n");
    }else{
      for(int i=0;i<=26;i++){
        if(a<=b*(1+i)){
          printf("%d\n",i);
          i=27;
        }
      }
    }
    casos++;
    scanf("%d %d",&a,&b );
  }
    return 0;
}
