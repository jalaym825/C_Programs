#include <stdio.h>
#include <math.h>

int main()
{
    int number, temp, digits = 0;
    double sum;
    printf("enter the number: ");
    scanf("%d", &number);
    temp = number;

    for (; temp > 0; digits++)
        temp /= 10;

    temp = number;

    for (; temp > 0;)
    {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }

    if (sum == (double)number)
        printf("entered number is Armstrong number");
    else
        printf("enterd number isn't Armstrong number");

    return 0;
}
