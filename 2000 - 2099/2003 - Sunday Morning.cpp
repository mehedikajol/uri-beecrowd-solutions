#include<bits/stdc++.h>
using namespace std;

int main(void){
    int h,m;
    char a;
    while(scanf("%d%c%d",&h,&a,&m)!=EOF){
        int temp;
        if(h==7)
            temp=m;
        else if(h<7)
            temp=0;
        else if(h>7)
            temp=(h-7)*60+m;
        cout<<"Atraso maximo: "<<temp<<endl;
    }
    return 0;
}