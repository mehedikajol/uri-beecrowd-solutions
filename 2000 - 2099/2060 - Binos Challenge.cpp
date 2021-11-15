#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n,x;
    cin>>n;
    int m2,m3,m4,m5;
    m2=m3=m4=m5=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x%2==0) m2++;
        if(x%3==0) m3++;
        if(x%4==0) m4++;
        if(x%5==0) m5++;
    }
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",m2,m3,m4,m5);
    return 0;
}
