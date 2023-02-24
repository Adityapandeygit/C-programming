#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int result = 0;
    int n = 0;

    // Calculate the number of digits in the number
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    // Calculate the Armstrong number
    originalNum = num;
    while (originalNum != 0) {
        int remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == num) {
        return 1;
    }
    else {
        return 0;
    }
}

// Function to print all Armstrong numbers between a given interval
void printArmstrongNumbers(int start, int end) {
    printf("Armstrong numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    // Print Armstrong numbers between 1 and 1000
    printArmstrongNumbers(1, 50);

    return 0;
}
