#include<stdio.h>
main(){
    int N[1000],x,i,j;
    scanf("%d",&x);
    j=0;
    for(i=0;i<1000;i++){
        printf("N[%d] = %d\n",i,j++);
        if(j==x)
            j=0;
    }
    return(0);
}