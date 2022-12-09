#include <stdio.h>

int main()
{
    int number, odd = 0, even = 0;
    printf("enter a number: ");
    scanf("%d", &number);

    do
    {
        if (number % 10 % 2)
            odd++;
        else
            even++;
        number /= 10;
    } while (number);

    printf("there are %d odd numbers and %d even numbers.", odd, even);

    return 0;
}
