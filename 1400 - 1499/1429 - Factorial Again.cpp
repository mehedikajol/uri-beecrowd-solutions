#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<time.h>
int main(void){
    int input,i,res,temp;
    int ara[5]={1,2,6,24,120};
    while(scanf("%d",&input)==1 && input!=0){
        i=1;
        res=0;
        while(input>0){
            temp=input%10;
            //i+=1;
            res=res+temp*ara[i-1];
            input=input/10;
            i++;
        }
        printf("%d\n",res);
    }
    return 0;
}
