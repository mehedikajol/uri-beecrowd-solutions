#include <bits/stdc++.h>
using namespace std;
 
int main(void){
    int n,k;
    while(cin>>n>>k){
        int m,r;
        for(int i=0;i<abs(k);i++){
            if((n-i)%k==0){
                m=(n-i)/k;
                r=i;
                break;
            }
        }
        cout<<m<<" "<<r<<endl;
    }
    return 0;
}