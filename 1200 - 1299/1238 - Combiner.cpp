#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin>>n;
    getchar();
    while(n--){
        string str1,str2,str3="",str4="";
        cin>>str1>>str2;
        int l1=str1.size(),l2=str2.size();
        int lmx=max(l1,l2),lmn=min(l1,l2);
        if(l1>l2){
            for(int i=lmn;i<lmx;i++) str3+=str1[i];
        }
        else if(l1<l2){
            for(int i=lmn;i<lmx;i++) str3+=str2[i];
        }
        for(int i=0;i<lmn;i++){
            str4+=str1[i];
            str4+=str2[i];
        }
        cout<<str4+str3<<endl;
    }
    return 0;
}
