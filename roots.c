/*Created By 22CE071_Jalay*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, root1, root2, disc, imaginary;
    printf("Here is the standard format of quadratic equation: ax2 + bx + c = 0\n");
    printf("enter the value of a: ");
    scanf("%f", &a);
    printf("enter the value of b: ");
    scanf("%f", &b);
    printf("enter the value of c: ");
    scanf("%f", &c);

    disc = (b * b) - (4 * a * c);

    switch (disc > 0)
    {
    case 1:
        /* If disc is positive */
        root1 = (-b + sqrt(disc)) / (2 * a);
        root2 = (-b - sqrt(disc)) / (2 * a);

        printf("Two distinct and real roots are: %.2f and %.2f", root1, root2);
        break;

    case 0:
        /* If disc is negative */
        switch (disc < 0)
        {
        case 1:
            /* If disc is negative */
            root1 = root2 = -b / (2 * a);
            imaginary = sqrt(-disc)/(2*a);
            printf("Two complex roots are: %.2f + i%.2f and %.2f - i%.2f", root1, imaginary, root2, imaginary);
            break;

        case 0:
            /* If disc is zero */
            root1 = root2 = -b / (2 * a);

            printf("Two equal and real roots are: %.2f and %.2f", root1, root2);

            break;
        }
    }

    printf("\n\nCreated By 22CE071_Jalay\n\n");

    return 0;
}
