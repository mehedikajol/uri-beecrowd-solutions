#include<stdio.h>
int main(){
    int n,j,i,a,b,temp,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&a,&b);
        sum=0;
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        if(a%2!=0){
            for(j=a+2;j<b;j++){
                if(j%2!=0)
                    sum+=j;
            }
        }
        else{
            for(j=a+1;j<b;j++){
                if(j%2!=0)
                    sum+=j;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
