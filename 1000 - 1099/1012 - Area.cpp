//URI online judge 1012 solution in C++
//This solution is made by Mehedi Hasan Kajol

#include<iostream>
using namespace std;
int main(void){
    double a, b, c;
    double triangle, circle, trapezium, square, rectangle;
    double PI=3.14159;
    cin >> a >> b >> c;

    triangle = 0.5 * a * c;
    printf("TRIANGULO: %.3lf\n", triangle); //Using printf() for precision.

    circle = PI * c * c;
    printf("CIRCULO: %.3lf\n", circle); //Using printf() for precision.

    trapezium = (a+b) / 2.0 * c;
    printf("TRAPEZIO: %.3lf\n", trapezium); //Using printf() for precision.

    square = b * b;
    printf("QUADRADO: %.3lf\n", square); //Using printf() for precision.

    rectangle = a * b;
    printf("RETANGULO: %.3lf\n", rectangle); //Using printf() for precision.
    return 0;
}