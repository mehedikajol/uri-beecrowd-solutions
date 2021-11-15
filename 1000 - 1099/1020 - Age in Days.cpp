//URI online judge 1020 solution in C++
//This solution is made by Mehedi Hasan Kajol

#include<iostream>
using namespace std;
int main(void){
    long long int input,temp,year,month;
    cin >> input;
    year = input / 365;
    temp = input % 365;
    month = temp / 30;
    temp = temp % 30;
    cout<< year <<" ano(s)" << endl;
    cout<< month <<" mes(es)" << endl;
    cout<< temp <<" dia(s)" << endl;
    return 0;
}