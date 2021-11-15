#include <stdio.h>
 
int main() {
    int i,X,Y,temp;
    long int sum=0;
    scanf("%d%d",&X,&Y);
    if(X>Y){
        temp=X;
        X=Y;
        Y=temp;
    }
    for(i=X;i<=Y;i++){
        if(i%13==0)
            continue;
        else
            sum+=i;
    }
    printf("%ld\n",sum);
    return 0;
}