#include<stdio.h>
int main(void){
    int i,a,b,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&a,&b);
        printf("%d\n",a+b);
    }
    return 0;
}
