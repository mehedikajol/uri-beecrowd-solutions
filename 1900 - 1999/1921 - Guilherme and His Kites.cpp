#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<time.h>
int main(void){
    long long a,i,res=0;
    scanf("%lld",&a);
    for(i=1;i<=a;i++)
        res+=i;
    printf("%lld\n",res-2*a);
    return 0;
}
