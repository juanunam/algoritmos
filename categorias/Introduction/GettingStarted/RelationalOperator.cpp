#include<stdio.h>
int main(){
  int casos,a,b;
  scanf("%d",&casos );
  while (casos--) {
    scanf("%d %d",&a,&b );
    if(a<b)
    printf("<\n" );
    else if(a>b)
    printf(">\n" );
    else
    printf("=\n" );
  }
}
