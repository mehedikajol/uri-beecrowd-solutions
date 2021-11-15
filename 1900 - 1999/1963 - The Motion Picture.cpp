#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<time.h>
int main(void){
    double a,b,c;
    scanf("%lf %lf",&a,&b);
    c=b-a;
    printf("%.2lf%c\n",c/a*100.0,'%');
    return 0;
}
