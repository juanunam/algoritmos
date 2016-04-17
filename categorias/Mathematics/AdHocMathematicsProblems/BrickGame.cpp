#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;
int main(){

  int numero,casos,caso=1,media;

  scanf("%d",&casos);
  while(casos--){
    printf("Case %d: ",caso);
    scanf("%d",&numero );
    for (int i = 0; i < numero; i++) {
        scanf("%d",&media );
        if(i+1==(numero+1)/2)
          printf("%d\n",media );
      /* code */
    }

    caso++;
  }
    return 0;
}
