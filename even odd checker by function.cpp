#include <stdio.h>

// Function prototype
int isEven(int num);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isEven(num))
        printf("%d is an even number.\n", num);
    else
        printf("%d is an odd number.\n", num);

    return 0;
}

// Function definition
int isEven(int num)
{
    if (num % 2 == 0)
        return 1;
    else
        return 0;
}
