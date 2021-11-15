#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n,t=0;
    while(cin>>n){
        if(n==0) cout<<"Caso "<<++t<<": 1 numero"<<endl<<0<<endl<<endl;
        else{
            cout<<"Caso "<<++t<<": "<<n*(n+1)/2+1<<" numeros"<<endl<<0;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=i;j++)
                    cout<<" "<<i;
            }
            cout<<endl<<endl;
        }
    }
    return 0;
}
