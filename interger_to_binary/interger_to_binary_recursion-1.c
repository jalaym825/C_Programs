#include <stdio.h>

int convertBinary(int number, int i, int binary[20])
{
    if (number > 0)
    {
        (number == number / 2 * 2) ? (binary[i] = 0) : (binary[i] = 1);
        return convertBinary(number / 2, i + 1, binary);
    }
    else
        return i;
}

int main()
{
    int number, i, binary[20] = {0};

    printf("enter a +ve integer number: ");
    scanf("%d", &number);

    i = convertBinary(number, 0, binary) - 1;

    for (; i >= 0; i--)
        printf("%d", binary[i]);

    return 0;
}
