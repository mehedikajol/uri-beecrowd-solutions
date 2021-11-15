#include<stdio.h>
int main(void){
    int input,alchohol=0,gasoline=0,diesel=0;
    while(scanf("%d",&input)==1){
        if(input>4)
            continue;
        else if(input==1)
            alchohol++;
        else if(input==2)
            gasoline++;
        else if(input==3)
            diesel++;
        else if(input==4){
            printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",alchohol,gasoline,diesel);
            break;
        }
    }
    return 0;
}
