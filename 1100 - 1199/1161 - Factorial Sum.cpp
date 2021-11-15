#include <stdio.h>
 
int main() {
    unsigned long long int i,a,b,sum_1,sum_2,sum;
    while(scanf("%lld%lld",&a,&b)==2){
        sum_1=1;
        sum_2=1;
        sum=0;
        for(i=1;i<=a;i++)
            sum_1*=i;
        for(i=1;i<=b;i++)
            sum_2*=i;
        sum=sum_1+sum_2;
        printf("%lld\n",sum);
    }
    return 0;
}