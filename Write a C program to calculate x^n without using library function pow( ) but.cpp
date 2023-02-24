#include <stdio.h>

int power(int x, int n) {
    int result = 1;

    // Multiply x n times
    for (int i = 0; i < n; i++) { //Write a C program to calculate x^n without using library function pow( ) but

        result *= x;
    }

    return result;
}

int main() {
    // Test the function
    printf("%d\n", power(2, 3));  // Output: 8
    printf("%d\n", power(3, 4));  // Output: 81
    printf("%d\n", power(5, 2));  // Output: 25

    return 0;
}
