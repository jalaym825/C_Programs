#include <stdio.h>
#define row 10
#define column 7
int main()
{
    printf("MULTIPLICATION TABLE (1 to 7)\n");
    printf("-----------------------------\n");
    int i = 1, j = 1;
    do
    {
        j = 1;
        do
        {
            printf("%3d ", i * j);
            j++;
        } while (j <= column);
        printf("\n");
        i++;
    } while (i <= row);
    printf("-----------------------------");
    return 0;
}
