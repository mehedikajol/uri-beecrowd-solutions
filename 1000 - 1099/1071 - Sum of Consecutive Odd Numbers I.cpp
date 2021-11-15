#include<stdio.h>
int main(void){
    int i,a,b,temp,sum=0;
    scanf("%d%d",&a,&b);
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    if(a%2!=0){
        for(i=a+2;i<b;i++){
            if(i%2!=0)
                sum+=i;
        }
    }
    else{
        for(i=a+1;i<b;i++){
            if(i%2!=0)
                sum+=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
