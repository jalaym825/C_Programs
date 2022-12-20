#include <stdio.h>

void convertBinary(int number)
{
    if (number > 0)
    {
        convertBinary(number / 2);
        printf("%d", number - (number / 2 * 2));
    }
}

int main()
{
    int number;

    printf("enter a +ve integer number: ");
    scanf("%d", &number);

    convertBinary(number);
    return 0;
}
