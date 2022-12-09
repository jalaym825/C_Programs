#include <stdio.h>

int main()
{

    int matrix_a[3][3], matrix_b[3][3], finale_matrix[3][3] = {0}, i, j, k;

    printf("For Matrix A\n");
    printf("Enter row elements 1 by 1:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter A[%d][%d]", i + 1, j + 1);
            scanf("%d", &matrix_a[i][j]);
        }
    }
    printf("--------------------------\n");
    printf("For Matrix B\n");
    printf("Enter row elements 1 by 1:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter A[%d][%d]", i + 1, j + 1);
            scanf("%d", &matrix_b[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                finale_matrix[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }

    printf("\nA x B:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", finale_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
