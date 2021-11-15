#include<stdio.h>
int main(void){
    int i,j;
    int a[20];
    for(i=0;i<20;i++)
        scanf("%d",&a[i]);
    for(j=0,i=19;i>=0;j++,i--)
        printf("N[%d] = %d\n",j,a[i]);
    return 0;
}
