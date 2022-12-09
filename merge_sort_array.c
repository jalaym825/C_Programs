#include <stdio.h>

int main()
{

    int i1, j1, array1[10], array2[10], merged[20], a, i, j;
    printf("enter the size of an array1 (must be less than 10): ");
    scanf("%d", &i1);
    for (i = 0; i < i1; i++)
    {
        printf("enter array1[%d]: ", i + 1);
        scanf("%d", &array1[i]);
    }

    printf("\nenter the size of an array2 (must be less than 10): ");
    scanf("%d", &j1);
    for (i = 0; i < j1; i++)
    {
        printf("enter array2[%d]: ", i + 1);
        scanf("%d", &array2[i]);
    }

    for (i = 0; i < i1; i++)
        merged[i] = array1[i];

    for (i = 0; i < j1; i++)
        merged[i + i1] = array2[i];

    printf("Sorted Array is: ");
    for (i = 0; i < i1 + j1; i++)
    {
        for (j = i + 1; j < i1 + j1; j++)
        {
            if (merged[i] > merged[j])
            {
                a = merged[i];
                merged[i] = merged[j];
                merged[j] = a;
            }
        }
        printf("%d ", merged[i]);
    }
    return 0;
}
