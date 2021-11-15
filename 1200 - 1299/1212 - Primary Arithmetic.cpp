#include<bits/stdc++.h>
using namespace std;

int main(void){
    string s1,s2;
    while(cin>>s1>>s2){
        int cnt=0;
        if(s1=="0" && s2=="0") break;
        else{
            reverse(s1.begin(),s1.end());
            reverse(s2.begin(),s2.end());
            for(int i=s1.size();i<10;i++) s1+='0';
            for(int i=s2.size();i<10;i++) s2+='0';
            reverse(s1.begin(),s1.end());
            reverse(s2.begin(),s2.end());
            int carry=0,a,b;
            for(int i=9;i>=0;i--){
                a=s1[i]-'0';
                b=s2[i]-'0';
                carry=(a+b+carry)/10;
                cnt+=carry;
            }
        }
        if(cnt==0) cout<<"No carry operation."<<endl;
        else if(cnt==1) cout<<"1 carry operation."<<endl;
        else cout<<cnt<<" carry operations."<<endl;
    }
    return 0;
}
