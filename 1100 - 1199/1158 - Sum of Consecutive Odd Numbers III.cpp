#include<stdio.h>
int main(){
    int n,a,b,i,j,m,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=0;
        scanf("%d%d",&a,&b);
        if(a%2==0)
            m=a+1;
        else
            m=a;
        for(j=1;j<=b;j++){
            sum+=m;
            m+=2;
        }
        printf("%d\n",sum);
    }
    return 0;
}
