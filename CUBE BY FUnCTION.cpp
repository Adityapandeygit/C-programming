#include <stdio.h>

int findCube(int num)
{
    // Calculate the cube by multiplying the number by itself twice
    int cube = num * num * num;

    // Return the result
    return cube;
}

int main()
{
    int num, cube;

    // Read a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the cube of the number
    cube = findCube(num);

    // Print the result
    printf("The cube of %d is %d\n", num, cube);

    return 0;
}
