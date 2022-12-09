#include <stdio.h>

void main()
{
    int x, y, answer = 1, i = 1;
    printf("in order to find x^y, enter the value of x: ");
    scanf("%d", &x);
    printf("enter the value of y: ");
    scanf("%d", &y);

    do
    {
        answer *= x; // answer = answer * x
        i++;
    } while (i <= y);

    printf("and the answer of %d^%d is %d\n\n", x, y, answer);
}
