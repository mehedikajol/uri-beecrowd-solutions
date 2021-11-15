#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    while(scanf("%d",&n)!=EOF){
        getchar();
        for(int i=1;i<=n;i++){
            char str[1001]={'\0'};
            int total=0;
            scanf("%s",str);
            for(int i=0;i<strlen(str);i++){
                if(str[i]=='8')
                    total+=7;
                else if(str[i]=='6' || str[i]=='9' || str[i]=='0')
                    total+=6;
                else if(str[i]=='2' || str[i]=='3' || str[i]=='5')
                    total+=5;
                else if(str[i]=='4')
                    total+=4;
                else if(str[i]=='7')
                    total+=3;
                else if(str[i]=='1')
                    total+=2;
            }
            cout<<total<<" leds"<<endl;
        }
    }
    return 0;
}