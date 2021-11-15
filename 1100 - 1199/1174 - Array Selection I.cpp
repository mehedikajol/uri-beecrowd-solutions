#include<stdio.h>
#include<math.h>
int main(void){
    double n,a[100];
    int i,j=0;
    for(i=0;i<=99;i++){
        scanf("%lf",&n);
        if(n<=10.0){
            a[j]=n;
            if(fmod(n,1.0)==0.0)
                printf("A[%d] = %.lf\n",i,a[j]);
            else
                printf("A[%d] = %.1lf\n",i,a[j]);
            j++;
        }
        else
            continue;
    }
    return 0;
}
