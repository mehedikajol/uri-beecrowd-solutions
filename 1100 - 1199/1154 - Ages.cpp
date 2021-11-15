#include <stdio.h>
 
int main() {
    int i,age;
    long int sum=0,count=0;
    float aver;
    while(scanf("%d",&age)==1){
        if(age<0)
            break;
        else{
            sum+=age;
            count++;
        }
    }
    aver=(float)sum/(float)count;
    printf("%.2f\n",aver);
    return 0;
}