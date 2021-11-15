#include<bits/stdc++.h>
using namespace std;

int main(void){
    string str;
    while(getline(cin,str)){
        int cnt=0;
        for(int i=0;i<str.size();i++){
            if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
                if(cnt%2==0 && (str[i]>='a' && str[i]<='z'))
                    str[i]-=32;
                if(cnt%2!=0 && (str[i]>='A' && str[i]<='Z'))
                    str[i]+=32;
                cnt++;
            }
        }
        cout<<str<<endl;
    }
    return 0;
}
