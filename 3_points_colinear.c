#include <stdio.h>
#include <math.h>

int main()
{
    int points[3][2] = {0}, i, j, s1, s2, s3;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            j == 0 ? printf("enter x%d: ", i + 1) : printf("enter y%d: ", i + 1);
            scanf("%d", &points[i][j]);
        }
    }

    s1 = fabs(points[0][0] - points[1][0]) / fabs(points[0][1] - points[1][1]);
    s2 = fabs(points[1][0] - points[2][0]) / fabs(points[1][1] - points[2][1]);
    s3 = fabs(points[2][0] - points[0][0]) / fabs(points[2][1] - points[0][1]);

    if (s1 == s2 && s2 == s3 && s3 == s1)
        printf("points are colinear");
    else
        printf("points are non colinear");

    return 0;
}
