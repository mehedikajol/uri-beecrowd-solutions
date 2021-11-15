#include<stdio.h>
int main(void){
    int n,i,input;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&input);
        if(input%2==0)
            printf("0\n");
        else
            printf("1\n");
    }
    return 0;
}
