#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<time.h>
int main(void){
    int N,n,k,i,j,temp,res,min=0,max=0,x;
    scanf("%d",&N);
    for(k=1;k<=N;k++){
        scanf("%d",&n);
        int ara[n+1];
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);
        for(i=0;i<n;i++){
            max=min=res=temp=0;
            temp=ara[i];
            for(j=0;j<n;j++){
                if(temp>ara[j])
                    max++;
                else if(temp<ara[j])
                    min++;
            }
            if(max==min){
                res=temp;
                break;
            }
        }
        printf("Case %d: %d\n",k,res);
    }
    return 0;
}
