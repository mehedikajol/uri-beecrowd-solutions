#include<stdio.h>

int main(void){
    int a,b,c;
    char x;
    while(scanf("%i%i%i",&a,&b,&c)!=EOF){
        if(a==b && b!=c) x='C';
        else if(a==c && c!=b) x='B';
        else if(b==c && b!=a) x='A';
        else x='*';
        printf("%c\n",x);
    }
    return 0;
}
