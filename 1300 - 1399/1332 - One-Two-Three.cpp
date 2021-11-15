#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    string a,b;
    cin>>n;
    while(n--){
        cin>>a;
        if(a.length()==5)
            cout<<"3"<<endl;
        else{
            if(a[0]=='t'&& a[1]=='w' || a[0]=='t'&& a[2]=='o' || a[1]=='w'&& a[2]=='o')
                cout<<"2"<<endl;
            else
                cout<<"1"<<endl;
        }
    }
    return 0;
}
