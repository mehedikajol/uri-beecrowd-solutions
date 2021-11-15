#include <stdio.h>
 
int main() {
    long int i,n;
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
        printf("%d %d %d\n",i,i*i,i*i*i);
    return 0;
}