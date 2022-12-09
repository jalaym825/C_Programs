#include <stdio.h>
#include <string.h>
int main()
{
    char names[5][30];
    int i = 0, j = 0;
    char temp[30];
    for (i = 0; i < 5; i++)
    {
        printf("enter name %d: ", i + 1);
        fgets(names[i], 30, stdin);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - 1 - i; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("----------------------\n");
    printf("  Sorted Names Are:   \n");
    printf("----------------------\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d) %s", i + 1, names[i]);
    }
    return 0;
}
