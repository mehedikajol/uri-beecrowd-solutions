#include<stdio.h>
int main(void){
    int i;
    double n;
    scanf("%lf",&n);
    for(i=0;i<100;i++){
        printf("N[%d] = %.4lf\n",i,n);
        n=n/2.00;
    }
    return 0;
}
