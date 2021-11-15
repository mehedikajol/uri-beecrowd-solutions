#include<bits/stdc++.h>
using namespace std;
long long count(long long);
int main(void){
    int n;
    cin>>n;
    while(n--){
        long long a;
        cin>>a;
        cout<<count(a)-1<<endl;
    }
    return 0;
}
long long count(long long a){
    long long ans=1;
    for(int i=1;i<=a;i++)
        ans*=2;
    return ans;
}
