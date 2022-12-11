#include <stdio.h>
int main()
{
    int number, i, binary[50];

    printf("enter a +ve integer number: ");
    scanf("%d", &number);

    for (i = 0; number > 0; i++)
    {
        if (number == number / 2 * 2)
            binary[i] = 0;
        else
            binary[i] = 1;
        number /= 2;
    }

    for (i = i - 1; i >= 0; i--)
        printf("%d", binary[i]);

    return 0;
}
