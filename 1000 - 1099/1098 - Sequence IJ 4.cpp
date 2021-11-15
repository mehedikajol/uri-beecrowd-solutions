#include<stdio.h>
#include<math.h>
int main(void){
    float i,j,x;
    for(i=0.0;i<=2.0;i+=0.2){
        for(j=1.0;j<=3.0;j+=1.0){
            x=fmod(i,1.00);
            if(x==0.00)
                printf("I=%.f J=%.f\n",i,i+j);
            else
                printf("I=%.1f J=%.1f\n",i,i+j);
        }
    }
    printf("I=2 J=3\nI=2 J=4\nI=2 J=5\n");
    return 0;
}
