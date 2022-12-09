#include <stdio.h>
int main()
{
    int l1, l2, l3, i;
    printf("enter l1: ");
    scanf("%d", &l1);
    printf("enter l2: ");
    scanf("%d", &l2);
    printf("enter l3: ");
    scanf("%d", &l3);

    if (l1 + l2 > l3 && l2 + l3 > l1 && l3 + l1 > l2)
        printf("your entered triangle is valid");
    else
        printf("your entered triangle is invalid");
    return 0;
}
