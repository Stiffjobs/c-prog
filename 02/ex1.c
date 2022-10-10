#include <stdio.h>

#define row 3
#define col 4

int main(void)
{
    int A[row][col] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int B[col] = {4, 8, 12, 16};

    printf("A=\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf(" %d", A[i][j]);
        }
        printf("\n");
    }

    printf("b=\n");
    for (int i = 0; i < col; i++) {
        printf(" %d\n", B[i]);
    }

    printf("A*b=\n");
    for (int i = 0; i < row; i++)
    {
        int val = 0;
        for (int j = 0; j < col; j++) {
            val += A[i][j] * B[j];
        }   /* code */
        printf("%d\n", val);
    }
    

}