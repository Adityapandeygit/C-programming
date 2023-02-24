#include <stdio.h>

// Function prototype
void find_primes(int start, int end);

int main() {
    int start, end;

    // Read the start and end intervals from the user
    printf("Enter the start interval: ");
    scanf("%d", &start);
    printf("Enter the end interval: ");
    scanf("%d", &end);

    // Find and print all the prime numbers between the start and end intervals
    printf("Prime numbers between %d and %d:\n", start, end);
    find_primes(start, end);

    return 0;
}

// Function to find and print all prime numbers between the start and end intervals
void find_primes(int start, int end) {
    int i, j;

    for (i = start; i <= end; i++) {
        int is_prime = 1;

        // Check if the current number is prime
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        // If the current number is prime, print it
        if (is_prime) {
            printf("%d ", i);
        }
    }
}
