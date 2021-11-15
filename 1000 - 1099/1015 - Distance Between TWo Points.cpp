#include<iostream>
#include<math.h>
using namespace std;
int main(void){
    double x1, y1, x2, y2, x, y, distance;
    cin >> x1 >> y1>> x2 >> y2;
    x = x2 - x1;
    y = y2 - y1;
    distance = sqrt( (x * x) + (y * y) ); // Calculating the distance.
    printf("%.4lf\n", distance); // Using printf() for precision.
    return 0;
}