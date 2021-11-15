#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<time.h>
int main(void){
    long long int input,n,i,x;
    long long int fib[61];
    fib[0]=0;
    fib[1]=1;
    while(scanf("%lld",&input)==1 && input!=0){
        for(x=1;x<=input;x++){
            scanf("%lld",&n);
            if(n==0)
                printf("Fib(0) = 0\n");
            else if(n==1)
                printf("Fib(1) = 1\n");
            else{
                for(i=2;i<=60;i++){
                    fib[i]=fib[i-1]+fib[i-2];
                    if(i==n){
                        printf("Fib(%lld) = %lld\n",i,fib[i]);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
