#include<stdio.h>
int main(void){
    double up=1.0,down=1.0,sum=0, result=0;
    int i;
    for(i=1;i<=20;i++){
        up+=2.0;
        down*=2.0;
        if(up==41.0)
            break;
        else{
            sum=up/down;
            result+=sum;
        }
    }
    printf("%.2lf\n",result+1.0);
    return 0;
}
