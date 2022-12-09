#include <stdio.h>
int main()
{
    int number;
    printf("enter a number: ");
    scanf("%d", &number);
    number < 0 ? printf("absolute value of %d is %d", number, -number) : printf("absolute value of %d is %d", number, number);
    return 0;
}
