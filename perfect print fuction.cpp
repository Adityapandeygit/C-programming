#include <stdio.h>

// Function to check if a number is perfect or not
int isPerfect(int n)
{
    int i, sum = 0;

    // Check if the number is a multiple of any number between 1 and n-1
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    // Return 1 if the sum of the factors is equal to the number, else return 0
    return (sum == n);
}

// Function to print all perfect numbers between a given interval
void printPerfectNumbers(int start, int end)
{
    int i;

    // Iterate through the interval and print all perfect numbers
    for (i = start; i <= end; i++)
    {
        if (isPerfect(i))
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int start, end;

    // Get the start and end of the interval
    printf("Enter start of interval: ");
    scanf("%d", &start);
    printf("Enter end of interval: ");
    scanf("%d", &end);

    printf("Perfect numbers between %d and %d: ", start, end);
    printPerfectNumbers(start, end);

    return 0;
}
