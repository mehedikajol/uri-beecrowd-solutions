#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<time.h>
int main(void){
    int n,i,les=0;
    double reg,mark,max=0.0,select;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lf %lf",&reg,&mark);
        if(mark<8.0)
            les++;
        else{
            if(mark>max){
                max=mark;
                select=reg;
            }
        }
    }
    if(les==n)
        printf("Minimum note not reached\n");
    else
        printf("%.lf\n",select);
    return 0;
}
