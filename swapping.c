#include <stdio.h>
int main()
{
  int num1, num2;
  printf("Enter num1: ");
  scanf("%d", &num1);
  printf("Enter num2: ");
  scanf("%d", &num2);

  // swapping
  num1 = num1 - num2;
  num2 = num1 + num2;
  num1 = num2 - num1;

  printf("After swapping, num1 = %d\n", num1);
  printf("After swapping, num2 = %d", num2);
  return 0;
}
