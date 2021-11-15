//URI online Judge 1005 solution in C++
#include<iostream>
using namespace std;
int main(void){
     float a, b, c, average;
     cin >> a >> b >> c;
     average=( a*2.0 + b*3.0 + c*5.0 ) /10.0;
     printf("MEDIA = %.1f\n", average); //I use printf() function for precision.
     return 0;
}