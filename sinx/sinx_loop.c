#include <stdio.h>
#include <math.h>
int main()
{
    int x, n, i, j;
    float sum, fact;
    printf("enter the value of x");
    scanf("%d", &x);
    printf("enter the value of n");
    scanf("%d", &n);
    sum = x;
    for (i = 1; i < n; i++)
    {
        fact = 1.0;
        for (j = 1; j <= 2 * i + 1; j++)
        {
            fact *= j;
        }
        if (i % 2 == 0)
        {
            sum += (pow(x, (2 * i + 1))) / fact;
        }
        else
        {
            sum -= (pow(x, (2 * i + 1))) / fact;
        }
    }
    printf("answer is %.2f", sum);
    return 0;
}
