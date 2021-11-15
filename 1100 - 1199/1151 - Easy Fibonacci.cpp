#include<stdio.h>
int main(void){
    int i,n;
    long long int f0=0,f1=1,f;
    scanf("%d",&n);
    printf("0 ");
    for(i=2;i<=n;i++){
        f=f0+f1;
        if(i<n)
            printf("%lld ",f);
        else if(i==n)
            printf("%lld\n",f);
        f1=f0;
        f0=f;
    }
    return 0;
}
