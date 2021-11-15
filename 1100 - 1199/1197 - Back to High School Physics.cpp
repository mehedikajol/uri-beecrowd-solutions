#include<stdio.h>
int main(void){
    int v,t,result;
    while(scanf("%d%d",&v,&t)==2 && (v>=-100 && v<=100) && (t>=0 && t<=200)){
        result=v*t*2;
        printf("%d\n", result);
    }
    return 0;
}
