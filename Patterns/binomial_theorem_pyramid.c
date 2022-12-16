/*
This program is made by Jalay (CE@CSPIT), Vatsal(IT@DDU).
*/

#include <stdio.h>

int ncx(int, int);
int fact(int);

int main()
{
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);

    for (int j = 0; j < n; j++)
    {
        printf("%2c", 32);
    }
    printf("1\n");

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("%2c", 32);
        }

        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0)
                printf("%d", ncx(i, j));
            else
                printf("%4d", ncx(i, j));
        }
        printf("\n");
    }

    printf("\nThis program is made by Jalay (CE@CSPIT), Vatsal(IT@DDU).");

    return 0;
}

int ncx(int n, int x)
{
    return fact(n) / (fact(x) * fact(n - x));
}

int fact(int x)
{
    int res = 1;
    for (int i = 1; i <= x; i++)
    {
        res *= i;
    }
    return res;
}
