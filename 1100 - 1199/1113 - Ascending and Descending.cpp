#include <stdio.h>
 
int main() {
    int a,b;
    while(scanf("%d%d",&a,&b)==2){
        if(a==b)
            break;
        else if(a>b)
            printf("Decrescente\n");
        else
            printf("Crescente\n");
    }
    return 0;
}