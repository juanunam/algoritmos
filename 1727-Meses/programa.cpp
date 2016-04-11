#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<string.h>
#include<map>
using namespace std;

string resultado1="1 0 0 0 0 0 0 0";
int resultado=1;

int main(){

  map<string,int> meses;

  meses["JAN"]=31;
  meses["FEB"]=28;
  meses["MAR"]=31;
  meses["APR"]=30;
  meses["MAY"]=31;
  meses["JUN"]=30;
  meses["JUL"]=31;
  meses["AUG"]=31;
  meses["SEP"]=30;
  meses["OCT"]=31;
  meses["NOV"]=30;
  meses["DEC"]=31;

  map<string,int> dias31;

  dias31["SUN"]=8;
  dias31["MON"]=8;
  dias31["TUE"]=8;
  dias31["WED"]=9;
  dias31["THU"]=10;
  dias31["FRI"]=10;
  dias31["SAT"]=9;

  map<string,int> dias30;

  dias30["SUN"]=8;
  dias30["MON"]=8;
  dias30["TUE"]=8;
  dias30["WED"]=8;
  dias30["THU"]=9;
  dias30["FRI"]=10;
  dias30["SAT"]=9;


  map<string,int> dias28;

  dias28["SUN"]=8;
  dias28["MON"]=8;
  dias28["TUE"]=8;
  dias28["WED"]=8;
  dias28["THU"]=8;
  dias28["FRI"]=8;
  dias28["SAT"]=8;


    int casos=0;
    scanf("%d",&casos);
     bool blank = false;
    while(casos--){
        char a[10],b[10];
        scanf("%s %s",a,b);

        if(meses.find(a)->second==31)
        printf("%d\n",dias31.find(b)->second);
        else if(meses.find(a)->second==30)
        printf("%d\n",dias30.find(b)->second);
        else
        printf("%d\n",dias28.find(b)->second);
    }

    return 0;
}

