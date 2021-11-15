//URI online judge 1001 solution in C++
//This solution is made by Mehedi Hasan Kajol

#include<iostream>
using namespace std;
int main(void){
    int code1, quantity1, code2, quantity2;
    double price1, price2, result1, result2, result;    
    cin>> code1>> quantity1>> price1;
    cin>> code2>> quantity2>> price2;
    result1 = (double)quantity1 * price1; //Type cast of product one from int to double
    result2 = (double)quantity2 * price2; //Type cast of product two from int to double
    result = result1 + result2; //Adding two product prices.
    printf("VALOR A PAGAR: R$ %.2lf\n",result); //Using printf() for precision.
    return 0;
}