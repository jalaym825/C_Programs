#include <stdio.h>
int main()
{
    float amount;
    printf("enter anount");
    scanf("%f", &amount);

    int rupee = amount;
    float paisa = (amount - rupee) * 100;
    printf("%d\n", rupee);
    printf("%.0f", paisa);
    return 0;
}
