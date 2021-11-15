#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<time.h>
int main(void){
    unsigned long long input,i,temp;
    scanf("%llu",&input);
    for(i=1;i<=11;i++){
        temp=input%10;
        printf("%llu",temp);
        input=input/10;
        if(input==0)
            break;
    }
    printf("\n");
    return 0;
}
