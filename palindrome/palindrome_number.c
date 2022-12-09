#include <stdio.h>
#include <math.h>
int main()
{
    int number, temp = 0, digits = 0;
    double rnumber = 0.0;
    printf("enter a number: ");
    scanf("%d", &number);

    temp = number;
    while (temp > 0)
    {
        temp /= 10;
        digits++;
    }

    temp = number;

    while (digits)
    {
        rnumber += temp % 10 * pow(10, digits - 1);
        temp /= 10;
        digits--;
    }

    if (rnumber == (double)number)
        printf("reversed number is %.0lf and it is same as original number.", rnumber);
    else
        printf("reversed number is %.0lf and it's not same as original number.", rnumber);

    return 0;
}
