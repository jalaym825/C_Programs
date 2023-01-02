#include <stdio.h>
#include <math.h>

float area(int, int, int);
float half_surfaceA(int, int, int);

int main()
{
    int a, b, c;
    printf("enter value of A: ");
    scanf("%d", &a);
    printf("enter value of B: ");
    scanf("%d", &b);
    printf("enter value of C: ");
    scanf("%d", &c);

    float tri_area = area(a, b, c);

    tri_area > 0 ? printf("your triangle is valid and it's area is %.2f", tri_area) : printf("your triangle is invalid and it's area is %.2f", tri_area);
    return 0;
}

float area(int a, int b, int c)
{
    float tarea;
    float s = half_surfaceA(a, b, c);
    tarea = sqrtf(s * (s - a) * (s - b) * (s - c));
    return tarea;
}

float half_surfaceA(int a, int b, int c)
{
    return (a + b + c) / 2.0;
}
