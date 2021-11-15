//URI online judge 1009 solution in C++
#include<iostream>
using namespace std;
int main(void){
    double salary, totalSell, totalSalary;
    string employeeName;
    cin>> employeeName;
    cin>> salary >> totalSell;
    totalSalary = salary + totalSell * 0.15;
    printf("TOTAL = R$ %.2lf\n", totalSalary); //Using printf() for precision
    return 0;
}