// Read in number from user
#include <stdio.h>

int main()
{
// Declare variables
int num, originalNum, remainder, result = 0;
printf("Enter a number: ");
scanf("%d", &num);

// Store original value of num
originalNum = num;

// Calculate sum of factorial of digits
while (num != 0)
{
    // Get the last digit
    remainder = num % 10;

    // Calculate the factorial of the digit
    int factorial = 1;
    for (int i = 1; i <= remainder; i++)
    {
        factorial *= i;
    }

    // Add the factorial to the result
    result += factorial;

    // Remove the last digit from the number
    num /= 10;
}

// Check if the number is a strong number
if (result == originalNum)
{
    printf("%d is a strong number.\n", originalNum);
}
else
{
    printf("%d is not a strong number.\n", originalNum);
}

return 0 ;
