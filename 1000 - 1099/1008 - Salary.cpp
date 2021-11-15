//URI online judge 1008 solution in C++
#include<iostream>
using namespace std;
int main(void){
    int A, hours;
    double salary, totalSalary;
    cin>> A >> hours >> salary;
    totalSalary = (double)hours * salary; //Converting integer into double
    cout<<"NUMBER = "<<A<<endl;
    printf("SALARY = U$ %.2lf\n", totalSalary); //Using printf() function for precision
    return 0;
}