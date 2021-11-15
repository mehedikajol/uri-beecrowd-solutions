#include<bits/stdc++.h>
using namespace std;

int main(void){
    double a,b,c;
    cin>>a>>b>>c;
    if(a==0) cout<<"Impossivel calcular"<<endl;
    else if(b*b-4*a*c<0) cout<<"Impossivel calcular"<<endl;
    else{
        double x1=(-b+sqrt(b*b-4*a*c))/(2*a);
        double x2=(-b-sqrt(b*b-4*a*c))/(2*a);
        printf("R1 = %.5lf\nR2 = %.5lf\n",x1,x2);
    }
    return 0;
}
