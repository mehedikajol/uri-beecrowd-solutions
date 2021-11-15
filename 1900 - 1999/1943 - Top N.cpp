#include<stdio.h>
int main(){
    short int n,position=0;
    while(scanf("%i",&n)==1){
        if(n==1)
            position=1;
        else if(n>1 && n<=3)
            position=3;
        else if(n>3 && n<=5)
            position=5;
        else if(n>5 && n<=10)
            position=10;
        else if(n>10 && n<=25)
            position=25;
        else if(n>25 && n<=50)
            position=50;
        else if(n>50 && n<=100)
            position=100;
        printf("Top %i\n",position);
    }
    return 0;
}