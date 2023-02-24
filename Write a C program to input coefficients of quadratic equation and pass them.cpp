#include <stdio.h>
#include <math.h>

int QUAD(int a, int b, int c)
{
  // Calculate the discriminant
  int discriminant = b*b - 4*a*c;

  if (discriminant > 0)
  {
    // Roots are real and different
    return 1;
  }
  else if (discriminant == 0)
  {
    // Roots are real and same
    return 2;
  }
  else
  {
    // Roots are complex
    return 3;
  }
}

int main(void)
{
  int a, b, c;

  printf("Enter the coefficients of the quadratic equation (a, b, c): ");
  scanf("%d%d%d", &a, &b, &c);

  int result = QUAD(a, b, c);

  if (result == 1)
  {
    printf("Roots are real and different.\n");
  }
  else if (result == 2)
  {
    printf("Roots are real and same.\n");
  }
  else
  {
    printf("Roots are complex.\n");
  }

  return 0;
}
