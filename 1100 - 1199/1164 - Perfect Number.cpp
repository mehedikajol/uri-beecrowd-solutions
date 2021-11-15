#include <stdio.h>
 
int main() {
    int i,j,n,number,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=0;
        scanf("%d",&number);
        for(j=1;j<number;j++){
            if(number%j==0)
                sum+=j;
        }
        if(sum==number)
            printf("%d eh perfeito\n",number);
        else
            printf("%d nao eh perfeito\n",number);
    }
    return 0;
}