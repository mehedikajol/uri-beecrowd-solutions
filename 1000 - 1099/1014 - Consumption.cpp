#include<iostream>
using namespace std;
int main(void){
    double distance, fuel, average;
    cin >> distance >> fuel;
    average = distance / fuel;
    printf("%.3lf km/l\n", average); //Using printf() for precision.
    return 0;
}