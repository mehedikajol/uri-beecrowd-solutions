#include <stdio.h>
 
int main() {
    long int i,n;
    scanf("%ld",&n);
    for(i=1;i<=n;i++){
        if(n%i==0)
            printf("%ld\n",i);
        else
            continue;
    }
    return 0;
}