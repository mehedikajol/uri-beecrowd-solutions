#include<stdio.h>
int IsPrime(unsigned int number){
    if(number<=1)
        return 0;
    unsigned int i;
    for(i=2;i*i<=number;i++){
        if (number%i==0)
            return 0;
    }
    return 1;
}
int main(void){
    long int i,n,m,result;
    while(scanf("%ld",&n)==1){
        for(i=1;i<=n;i++){
            scanf("%ld",&m);
            result=IsPrime(m);
            if(result==1)
                printf("Prime\n");
            else
                printf("Not Prime\n");
        }
    }
    return 0;
}
