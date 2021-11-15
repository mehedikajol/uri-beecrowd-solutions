#include<stdio.h>
int main(){
    int h,m,h1,m1,h2,m2,result;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)==4){
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;
        else{
            if(h2==0)
                h2=24;
            if(m1>m2){
                m2=m2+60;
                m=m2-m1;
                if(h1>=h2)
                    h=23+h2-h1;
                else
                    h=h2-(h1+1);
            }
            else{
                m=m2-m1;
                if(h1>h2)
                    h=24+h2-h1;
                else
                    h=h2-h1;
            }
        }
        result=h*60+m;
        printf("%d\n",result);
    }
    return 0;
}
