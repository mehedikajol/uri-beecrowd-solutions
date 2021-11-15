#include <stdio.h>
 
int main() {
    int i,n;
    while(scanf("%d",&n)==1){
        if(n<=0)
            break;
        else{
            for(i=1;i<n;i++)
                printf("%d ",i);
        }
        printf("%d\n",n);
    }
    return 0;
}