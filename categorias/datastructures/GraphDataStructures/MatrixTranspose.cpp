#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<string>
#include<algorithm>
#include<cmath>
#include<sstream>
#include<vector>
using namespace std;


int main(){

  int m,n,r,a;
  int renglon=0;
  string linea;
  while(scanf("%d %d",&m,&n )!= EOF){
    vector< vector<int> > indices(n+1);
    vector< vector<int> > valores(n+1);
  //  printf("tamano:%d\n",(int)indices.size() );
    for (int i = 1; i <= m; i++) {
      scanf("%d",&r );
      //printf("%d\n",r );
      vector<int> donde;
      if(r==0){
        getline(cin,linea);

      }
      for (int k = 0; k < r; k++) {
          scanf("%d",&a );
          donde.push_back(a);
          indices[a].push_back(i);
      }
      for (int k = 0; k < r; k++) {
          scanf("%d",&a );
         valores[donde[k]].push_back(a);
      }

    }
    printf("%d %d\n",n,m );
    for (int i = 1; i <= n; i++) {
      r=indices[i].size();
      printf("%d",r );
      for (int k = 0; k < r; k++) {
          printf(" %d",indices[i][k]);
      }
      printf("\n");
      for (int k = 0; k < r; k++) {
          printf("%d",valores[i][k] );
          if(k!=r-1)
            printf(" ");
      }
      printf("\n");

    }

  }
    return 0;
}
