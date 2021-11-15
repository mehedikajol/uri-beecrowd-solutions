#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<time.h>
int main(void){
    int n,i;
    double code,total=0,amount,cost=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        code=0;
        amount=0;
        scanf("%lf %lf",&code,&amount);
        if(code==1001)
            cost=amount*1.5;
        if(code==1002)
            cost=amount*2.5;
        if(code==1003)
            cost=amount*3.5;
        if(code==1004)
            cost=amount*4.5;
        if(code==1005)
            cost=amount*5.5;
        total+=cost;
    }
    printf("%.2lf\n",total);
    return 0;
}
