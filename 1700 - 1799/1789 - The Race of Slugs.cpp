#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<time.h>
int main(void){
    int n,i,input,max,lev;
    while(scanf("%d",&n)!=EOF){
        max=0;
        lev=0;
        for(i=1;i<=n;i++){
            scanf("%d",&input);
            if(input<10)
                lev=1;
            else if(input>=10 && input<20)
                lev=2;
            else
                lev=3;
            if(lev>max)
                max=lev;
            input=0;
        }
        printf("%d\n",max);
    }
    return 0;
}