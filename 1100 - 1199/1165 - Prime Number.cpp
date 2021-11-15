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
    int i,n,number,prime;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&number);
        prime=IsPrime(number);
        if(prime==1)
            printf("%d eh primo\n",number);
        else
            printf("%d nao eh primo\n",number);
    }
    return 0;
}
