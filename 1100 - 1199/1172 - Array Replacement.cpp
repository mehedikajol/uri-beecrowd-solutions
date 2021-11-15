#include<stdio.h>
int main(void){
    int a[10],i;
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);
        if(a[i]<=0)
            a[i]=1;
        else
            continue;
    }
    for(i=0;i<=9;i++)
        printf("X[%d] = %d\n",i,a[i]);
    return 0;
}
