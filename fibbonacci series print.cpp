#include <stdio.h>

int main() {
  int num, i;
  long long int fib1 = 0, fib2 = 1, fib3;

  printf("Enter the number of terms: ");
  scanf("%d", &num);

  printf("Fibonacci series: ");
  for (i = 1; i <= num; i++) {
    printf("%d", fib1);
    fib3 = fib1 + fib2;
    fib1 = fib2;
    fib2 = fib3;
  }
  printf("\n");

  return 0;
}
