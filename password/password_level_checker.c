#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char pass[8];
    int alpha = 0, upper = 0, lower = 0, digit = 0, sp_char = 0, i = 0;
    printf("Password requirements:\n\tPassword must contains upppercase characters, lowercase characters, special characters and digits.\n\tYour password length must be 8.\n");
    printf("Enter a valid password: ");
    gets(pass);
    // cheecking password requirements
    if (strlen(pass) != 8)
    {
        printf("Your password must contain only 8 characters.\n");
    }
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
        else if (ispunct(pass[i]))
            sp_char = 1;
    }

    if ((alpha == 1 && digit == 0 && sp_char == 0) || (alpha == 0 && digit == 1 && sp_char == 0) || (alpha == 0 && digit == 0 && sp_char == 1))
    {
        printf("Your password is very poor.\n\n");
    }
    else if (alpha && upper && lower && digit && sp_char)
    {
        {
            printf("Your password is very strong.\n\n");
        }
    }
    else
    {
        printf("Your password is average.\n\n");
    }
    return 0;
}
