#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#include<time.h>
#define PI M_PI
int main(void){
    double a,b,c,iR,oR,tempA,p,iA,oA,tA;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3 && a!=0 && b!=0 && c!=0){
        p=(a+b+c)/2;
        tempA=sqrt(p*(p-a)*(p-b)*(p-c));
        iR=tempA/p;
        iA=iR*iR*PI;
        tA=tempA-iA;
        oR=(a*b*c)/(4*tempA);
        oA=oR*oR*PI-tempA;
        printf("%.4lf ",oA);
        printf("%.4lf ",tA);
        printf("%.4lf\n",iA);
    }
    return 0;
}
