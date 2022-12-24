//This Program is Prepared by 22CE016 SATYAM CHAROLA
#include<stdio.h>
void bin(int n)
{
    if(n>0)
    {
        bin(n/2);
        printf("%d",n%2);
    }
    else
        return;
}
int main()
{
    int number;
    printf("enter a number");
    scanf("%d",&number);
    bin(number);
}
