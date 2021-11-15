#include <stdio.h>
 
int main() {
    long int i,n,x,y;
    float result;
    scanf("%ld",&n);
    for(i=1;i<=n;i++){
        scanf("%ld%ld",&x,&y);
        if(y==0)
            printf("divisao impossivel\n");
        else{
            result=(float)x/(float)y;
            printf("%.1lf\n",result);
        }
    }
    return 0;
}