#include<stdio.h>
#include<math.h>
int main(void){
    int a,b,i,temp;
    long long int sum;
    while(scanf("%d%d",&a,&b)==2){
        sum=0;
        if(b>0){
            for(i=0;i<abs(b);i++){
                temp=a+i;
                sum+=temp;
            }
        }
        else{
            while(b<=0)
                scanf("%d",&b);
            for(i=0;i<abs(b);i++){
                temp=a+i;
                sum+=temp;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
