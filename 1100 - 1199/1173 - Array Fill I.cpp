#include<stdio.h>
int main(void){
    int i,input,value,value_1;
    scanf("%d",&input);
    for(i=0;i<=9;i++){
        printf("N[%d] = %d\n",i,input);
        input*=2;
    }
    return 0;
}
