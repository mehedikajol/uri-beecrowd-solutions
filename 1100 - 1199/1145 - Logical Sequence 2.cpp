#include<stdio.h>
int main(void){
    int i,j,x,y;
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i+=x){
            printf("%d",i);
        for(j=1;j<x;j++)
            printf(" %d",i+j);
        printf("\n");
    }
    return 0;
}
