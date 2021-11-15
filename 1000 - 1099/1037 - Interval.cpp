//URI online judge 1037 solution in C++
//This solution is made by Mehedi Hasan Kajol

#include<iostream>
using namespace std;
int main(void){
    float input;
    cin >> input;

    if( input >= 0 && input <= 25)
        cout << "Intervalo [0,25]" << endl;
    else if( input > 25 && input <= 50)
        cout << "Intervalo (25,50]" << endl;
    else if( input >50 &&input <=75 )
        cout << "Intervalo (50,75]" << endl;
    else if( input> 75 && input<=100 )
        cout << "Intervalo (75,100]" << endl;
    else
         cout << "Fora de intervalo" << endl;
    return 0;
}
