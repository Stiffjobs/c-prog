#include <stdio.h>

int main(void) {

    int x = 0;

    printf("Please input your score (integer): ");
    scanf("%d", &x);
    if (x > 100) {
        printf("Your score: %d, Grade: Error.\n", x);
    }
    else if (100>=x && x >= 90) {
        printf("Your score: %d, Grade: A+.\n", x);
    } else if (x >= 80 && x< 90) {
        printf("Your score: %d, Grade: A.\n", x);
    } else if (x >= 70 && x < 80) {
        printf("Your score: %d, Grade: B.\n", x);
    } else if (x >= 60 && x < 70) {
        printf("Your score: %d, Grade: C.\n", x);
    } else {
        printf("Your score: %d, Grade: F.\n", x);
    }


    return 0;
}