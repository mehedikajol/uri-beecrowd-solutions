#include<stdio.h>
int main(void){
    int i,n,count=0,input,input_1,min,position;
    scanf("%d",&n);
    scanf("%d",&input_1);
    min=input_1;
    position=1;
    for(i=2;i<=n;i++){
        scanf("%d",&input);
        if(min>input){
            min=input;
            position=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",min,position-1);
    return 0;
}
