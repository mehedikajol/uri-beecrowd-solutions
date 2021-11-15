#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(void){
    ll a,b;
    while(cin>>a>>b){
        if(a==0 && b==0) break;
        else cout<<a-(b-a)<<endl;
    }
    return 0;
}
