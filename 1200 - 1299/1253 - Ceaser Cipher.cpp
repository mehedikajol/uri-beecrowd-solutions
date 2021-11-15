#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    while(scanf("%d",&n)!=EOF){
        getchar();
        for(int i=1;i<=n;i++){
            char a[52];
            int x,m,l;
            cin>>a>>x;
            l=strlen(a);
            for(int j=0;j<l;j++){
                m=(int)(a[j])+26-x;
                if(m>90)
                    m=m-26;
                printf("%c",(char)m);
            }
            cout<<endl;
        }
    }
    return 0;
}