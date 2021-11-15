#include <stdio.h>
 
int main() {
    long long int i,n,fact=1;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        fact*=i;
    }
    printf("%lld\n",fact);
    return 0;
}