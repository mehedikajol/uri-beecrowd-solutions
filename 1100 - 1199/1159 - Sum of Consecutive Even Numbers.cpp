#include <stdio.h>
 
int main() {
     int number;
    long int sum;
    while(scanf("%d",&number)==1){
        sum=0;
        if(number==0)
            break;
        else if(number%2==0)
            sum=(number+number+2+number+4+number+6+number+8);
        else
            sum=(number+1+number+3+number+5+number+7+number+9);
        printf("%ld\n",sum);
    }
    return 0;
}