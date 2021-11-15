#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<time.h>
main(void){
    long long int n,i,a,b,r1,r2,x;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld%lld",&a,&b);
        if(a<b)
            printf("nao encaixa\n");
        if(a==b)
            printf("encaixa\n");
        if(a>b){
            while(b!=0){
                r1=r2=0;
                r1=a%10;
                r2=b%10;
                if(r1!=r2){
                    x=0;
                    break;
                }
                else
                    x=1;
                a=a/10;
                b=b/10;
            }
            if(x==1)
                printf("encaixa\n");
            else
                printf("nao encaixa\n");
        }
    }
    return 0;
}
