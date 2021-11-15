#include <stdio.h>
 
int main() {
    int a,b,temp,i;
    long int sum;
    while(scanf("%d%d",&a,&b)==2){
        sum=0;
        if(a<=0 || b<=0)
            break;
        else if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        for(i=a;i<=b;i++){
            printf("%d ",i);
            sum+=i;
        }
        printf("Sum=%ld\n",sum);
    }
    return 0;
}