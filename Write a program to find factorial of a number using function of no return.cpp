/*
#include <stdio.h>

int factorial()
{
  int num, fact = 1;
  printf("Enter a number: ");
  scanf("%d", &num);
  for (int i = 1; i <= num; i++)
  {
    fact = fact * i;
  }
  return fact;
}

int main()
{
  int result = factorial();
  printf("The factorial is %d\n", result);
  return 0;
}
*/
#include <stdio.h>

int factorial(int num)
{
  int fact = 1;
  for (int i = 1; i <= num; i++)
  {
    fact = fact * i;
  }
  return fact;
}

int main()
{
  int result = factorial( 0);
  printf("The factorial is %d\n", result);
  return 0;
}
