#include <stdio.h>
#include <math.h>

// Function to calculate the factorial of a number
int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

// Function to check if a number is strong
int isStrong(int n)
{
    int sum = 0;
    int temp = n;

    while (temp > 0)
    {
        // Extract the last digit of the number
        int digit = temp % 10;

        // Add the factorial of the digit to the sum
        sum += factorial(digit);

        // Remove the last digit from the number
        temp /= 10;
    }

    // Return 1 if the sum is equal to the original number, 0 otherwise
    return (sum == n);
}

int main()
{
    int start, end;

    printf("Enter start of interval: ");
    scanf("%d", &start);

    printf("Enter end of interval: ");
    scanf("%d", &end);

    printf("Strong numbers between %d and %d: ", start, end);
    for (int i = start; i <= end; i++)
        if (isStrong(i))
            printf("%d ", i);

    return 0;
}
