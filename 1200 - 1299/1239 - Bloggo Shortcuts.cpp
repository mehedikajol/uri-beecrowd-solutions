#include<bits/stdc++.h>
using namespace std;

int main(void){
    string str;
    while(getline(cin,str)){
        string str1="<i>",str2="</i>",str3="<b>",str4="</b>",str5="";
        int cnt1=0,cnt2=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='_'){
                if(cnt1%2==0) str5+=str1;
                else str5+=str2;
                cnt1++;
            }
            else if(str[i]=='*'){
                if(cnt2%2==0) str5+=str3;
                else str5+=str4;
                cnt2++;
            }
            else str5+=str[i];
        }
        cout<<str5<<endl;
    }
    return 0;
}
