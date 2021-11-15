#include<stdio.h>
int main(void){
    int valid=0;
    float input,sum=0,aver;
    while(scanf("%f",&input)==1){
        if(input>=0.0 && input<=10.0){
            sum+=input;
            valid++;
            if(valid==2){
                aver=sum/2.0;
                printf("media = %.2f\n",aver);
                return 0;
            }
        }
        else{
            printf("nota invalida\n");
        }
    }
    return 0;
}
