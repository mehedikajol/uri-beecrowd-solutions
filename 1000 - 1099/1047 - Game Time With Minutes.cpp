#include<stdio.h>
int main(void){
    int a_h,b_h,a_m,b_m,hour,minute;
    while(scanf("%d%d%d%d",&a_h,&a_m,&b_h,&b_m)==4){
        if(a_h<=b_h && a_m<=b_m){
            hour=b_h-a_h;
            minute=b_m-a_m;
        }
        else if(a_h<b_h && a_m>b_m){
            hour=b_h-(a_h+1);
            minute=60+b_m-a_m;
        }
        else if(a_h>b_h && a_m<=b_m){
            hour=24+b_h-a_h;
            minute=b_m-a_m;
        }
        else if(a_h>b_h && a_m>b_m){
            hour=23+b_h-a_h;
            minute=60+b_m-a_m;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minute);
    }
    return 0;
}
