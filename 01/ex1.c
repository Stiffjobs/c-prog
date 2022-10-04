#include <stdio.h>

int main(void)
{
    int x=0, fx = 0;
    printf("Input integer value: ");

    scanf("%d", &x);

    fx = 2017 * (x+4) - 23;
    printf("f(x) = %d\n", fx);

 
    return 0;
}
