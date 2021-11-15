#include<iostream>
using namespace std;
int main(void){
    double radius, volume, PI=3.14159;
    cin>> radius;
    volume = PI * radius * radius * radius * (4/3.0); //Calculating the volume.
    printf("VOLUME = %.3lf\n", volume); //Using printf() for precision.
    return 0;
}