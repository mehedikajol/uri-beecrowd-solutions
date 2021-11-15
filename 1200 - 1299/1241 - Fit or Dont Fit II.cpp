#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin>>n;
    getchar();
    for(int j=1;j<=n;j++){
        char str1[1002],str2[1002],str3[1002]={'\0'};
        scanf("%s%s",str1,str2);
        int len1=strlen(str1), len2=strlen(str2),i=0,x;
        if(len2>len1)
            x=0;
        else{
            int len=strlen(str1);
            for(int k=0;k<len/2;k++)
                swap(str1[k],str1[len-k-1]);
            for(i=0;i<len2;i++)
                str3[i]=str1[i];
            len=strlen(str3);
            for(int k=0;k<len/2;k++)
                swap(str3[k],str3[len-k-1]);
            (strcmp(str2,str3)==0)?x=1:x=0;
        }
        (x&1)?puts("encaixa"):puts("nao encaixa");
    }
    return 0;
}