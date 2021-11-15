#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin>>n;
    while(n--){
        string a,b;
        cin>>a>>b;
        if((a=="ataque" && b=="pedra") || (a=="ataque" && b=="papel") || (a=="pedra" && b=="papel"))
            cout<<"Jogador 1 venceu"<<endl;
        else if((b=="ataque" && a=="pedra") || (b=="ataque" && a=="papel") || (b=="pedra" && a=="papel"))
            cout<<"Jogador 2 venceu"<<endl;
        else if(a=="papel" && b=="papel")
            cout<<"Ambos venceram"<<endl;
        else if(a=="pedra" && b=="pedra")
            cout<<"Sem ganhador"<<endl;
        else if(a=="ataque" && b=="ataque")
            cout<<"Aniquilacao mutua"<<endl;
    }
    return 0;
}
