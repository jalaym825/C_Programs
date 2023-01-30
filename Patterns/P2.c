#include <stdio.h>
int main()
{
    int n = 5, x;
    printf("n = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        x = (i + 1) * 2 - 1;

        if (x == 1)
            printf("1");
        else
        {
            for (int j = 0; j < x / 2 + 1; j++)
            {
                printf("%d", j + 1);
            }

            for (int j = x / 2; j > 0; j--)
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}