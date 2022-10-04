#include <stdio.h>

int main(void) {
    double height = 0.0, weight = 0.0;
    double BMI = 0.0;

    printf("Please input your height (cm): ");
    scanf("%lf", &height);

    printf("Please input your weight (kg): ");
    scanf("%lf", &weight);

    BMI = weight / (height * height) * 10000;

    if (BMI < 18.5) {
        printf("Your BMI is %.1f. Underweight.\n", BMI);
    
    } else if (BMI < 25.0) {
        printf("Your BMI is %.1f. Normal.\n", BMI);
    
    } else if (BMI < 30.0) {
        printf("Your BMI is %.1f. Pre-obese.\n", BMI);
    
    } else {
        printf("Your BMI is %.1f. Obese class.\n", BMI);
    }

    return 0;
}