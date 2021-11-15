#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<time.h>
int main(void){
    int n,i,count=0,j;
    double input,total,temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lf",&input);
        count=0;
        total=0.0;
        while(input>1.0){
            input=input/2.0;
            //input=input-temp;
            //total=total+input;
            count++;
           // if(total==input){
              //  printf("%d\n",count);
              //  break;
           // }
           // else
               // continue;
            //++count;
                //break;
        }
        printf("%d dias\n",count);
    }
    return 0;
}
