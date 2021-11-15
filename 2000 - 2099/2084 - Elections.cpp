#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n,temp=2;
    cin>>n;
    double ara[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>ara[i];
        sum+=ara[i];
    }
    for(int i=0;i<n;i++)
        ara[i]=(ara[i]*100)/sum;
    sort(ara,ara+n);
    if(ara[n-1]>=45.0) temp=1;
    else{
        if(ara[n-1]>=40.0 && ara[n-1]-ara[n-2]>=10.0) temp=1;
    }
    cout<<temp<<endl;
    return 0;
}
