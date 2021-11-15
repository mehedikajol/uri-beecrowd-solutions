#include<stdio.h>
#define N 10000
 
int len=0;
void pre_gen(int ara[]);
 
int main()
{
    int n,i,ck;
    int ara[N+1] = {0};
    pre_gen(ara);
 
    while(scanf("%d",&n)==1){
 
            if(n >= 0 && ara[n]==1)
                printf("YES\n");
            else
                printf("NO\n");
    }
 
    return 0;
}
 
void pre_gen(int ara[])
{
    int i,j,tmp;
 
        for(i=0;i*i<=N;i++){
            for(j=0;j*j<=N;j++){
 
                if( (i*i)+(j*j) <= N ){
                    tmp = (i*i)+(j*j);
                    ara[tmp] = 1;
                  //  printf("%d\n",ara[len]);
                }
 
            }
        }
}