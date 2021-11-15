#include<stdio.h>
#include<math.h>
#include<string.h>
#include<limits.h>
int main(){
    long long x,z,i,count=1,sum,temp;
    scanf("%lld%lld",&x,&z);
    sum=x;
    while(x>=z)
        scanf("%lld",&z);
    if(x<z){
        for(i=0;i<INT_MAX;i++){
            temp=x+i;
            sum=sum+temp;
            count++;
            if(sum>=z)
                break;
        }
    }
    printf("%lld\n",count);
    return 0;
}
