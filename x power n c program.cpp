#include <stdio.h>

// Declare the function prototype
double power(double x, int n);

int main(void) {
  double x, result;
  int n;

  // Prompt the user to enter the value of x and n
  printf("Enter the value of x: ");
  scanf("%lf", &x);
  printf("Enter the value of n: ");
  scanf("%d", &n);

  // Calculate the result using the power function
  result = power(x, n);

  // Print the result
  printf("The result is: %lf\n", result);

  return 0;
}

// Define the power function
double power(double x, int n) {
  double result = 1;
  int i;

  for (i = 0; i < n; i++) {
    result *= x;
  }

  return result;
}
