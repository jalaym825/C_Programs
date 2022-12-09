#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char pass[100];
    int alpha = 0, upper = 0, lower = 0, digit = 0, i = 0;
    printf("Password requirements:\n\tPassword must contains upppercase characters, lowercase characters and digits.\n");
    do
    {
        printf("Enter a valid password: ");
        gets(pass);
        // cheecking password requirements
        for (i = 0; i < strlen(pass); i++)
        {
            if (isdigit(pass[i]))
            {
                digit = 1;
            }
            else if (isalpha(pass[i]))
            {
                if (isupper(pass[i]))
                    upper = 1;
                if (islower(pass[i]))
                    lower = 1;
                alpha = 1;
            }
        }
        // showing error if there is any
        if (!alpha)
        {
            printf("your password must contains alphabates\n\n");
            continue;
        }
        else
        {
            if (!upper)
            {
                printf("your password must contains uppercase alphabates\n\n");
                continue;
            }
            else if (!lower)
            {
                printf("your password must contains lowercase alphabates\n\n");
                continue;
            }
        }
        if (!digit)
        {
            printf("your password must contains digits\n\n");
            continue;
        }
    } while (digit == 0 || alpha == 0 || upper == 0 || lower == 0);
    printf("\nGood Password, you may proceed\nYour password is successfully saved");
    return 0;
}
