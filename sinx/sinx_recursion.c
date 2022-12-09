#include <stdio.h>
#include <math.h>

float sinfn(float, int, int, int);

int main()
{
    int x, n, i, j;
    float sum, fact;
    printf("enter the value of x");
    scanf("%d", &x);
    printf("enter the value of n");
    scanf("%d", &n);
    sum = x;
    float answer = sinfn(sum, 1, n, x);
    printf("answer is %.2f", answer);
    return 0;
}
float sinfn(float sum, int i, int n, int x)
{
    if (i < n)
    {
        float fact = 1.0;
        for (int j = 1; j <= 2 * i + 1; j++)
            fact *= j;
        i % 2 == 0 ? (sum += (pow(x, (2 * i + 1))) / fact) : (sum -= (pow(x, (2 * i + 1))) / fact);
        return sinfn(sum, i + 1, n, x);
    }
    else
        return sum;
}
