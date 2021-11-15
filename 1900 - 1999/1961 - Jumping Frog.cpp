#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<time.h>
int main(void){
    int max,n,i,j,k,step,x=1,min;
    scanf("%d%d",&max,&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=1;j<n;j++){
        if((a[j]-a[j-1])>max){
            x=0;
            break;
        }
    }
    for(k=0;k<n-1;k++){
        if(a[k]-a[k+1]>max){
            x=0;
            break;
        }
    }
    if(x==0)
        printf("GAME OVER\n");
    else
        printf("YOU WIN\n");
    return 0;
}
