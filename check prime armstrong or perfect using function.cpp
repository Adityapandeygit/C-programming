#include <stdio.h>
#include <math.h>

int is_prime(int num);
int is_armstrong(int num);
int is_perfect(int num);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_prime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    if (is_armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    if (is_perfect(num))
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);

    return 0;
}

int is_prime(int num)
{
    if (num < 2)
        return 0;

    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return 0;

    return 1;
}

int is_armstrong(int num)
{
    int original_num = num;
    int sum = 0;
    int digits = 0;

    while (num > 0)
    {
        digits++;
        num /= 10;
    }

    num = original_num;

    while (num > 0)
    {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return (sum == original_num);
}

int is_perfect(int num)
{
    int sum = 0;

    for (int i = 1; i < num; i++)
        if (num % i == 0)
            sum += i;

    return (sum == num);
}
