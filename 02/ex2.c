#include <stdio.h>
#include <math.h>

#define N 7

int Factorial(int n) {
    int res = 1;

    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}
double mysin(double x) {
    double my = 0;
    for (int i=1; i<= N; i++) {
        my += pow(-1, i+1) * pow(x, 2*i-1) / Factorial(2*i-1);
    }
    return my;
}

int main(void) {
    double x = 0;
    printf("Input x: ");
    scanf("%lf", &x);
    printf("sin(x) = %lf\n", sin(x));
    printf("my_sin(x) = %lf\n", mysin(x));
    return 0;
}
