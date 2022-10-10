#include <stdio.h>
#include <time.h>
#include <stdlib.h>
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
    //init the vars
    //init random numbers

    int n = 0;
    int i;
    int satisfied = 0;
    double x, y;
    srand((unsigned)time(NULL));
    printf("How many trials?");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        //generate random numbers x and y
        x = (double)rand() / RAND_MAX;
        y = (double)rand() / RAND_MAX;

        //count how many times the condition (y < mysin(pix)) is fufilled
        if (y < mysin(M_PI * x)) {
            satisfied++;
        }
    }
    double ratio = (double)satisfied / n;
    double error = ratio - 2/M_PI;

    printf("Result is %lf (Error: %lf)\n", ratio, error);
    //calculate the ratio r and error(r - 2/pi)
    //output the ratio and error

    return 0;
}