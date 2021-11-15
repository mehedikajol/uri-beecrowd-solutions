#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin>>n;
    getchar();
    while(n--){
        string str;
        getline(cin,str);
        string str1="",str2="";
        int len=str.size();
        for(int i=0;i<len/2;i++)
            str1+=str[i];
        for(int i=len/2;i<len;i++)
            str2+=str[i];
        reverse(str1.begin(),str1.end());
        reverse(str2.begin(),str2.end());
        cout<<str1+str2<<endl;
    }
    return 0;
}
