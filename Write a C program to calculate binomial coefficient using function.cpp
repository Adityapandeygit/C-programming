#include <stdio.h>

// Function prototype for binomial coefficient
int binomialCoeff(int n, int k);

int main()
{
    int n, k;

    // Prompt the user to enter values for n and k
    printf("Enter the values of n and k: ");
    scanf("%d%d", &n, &k);

    // Calculate and print the binomial coefficient
    printf("The binomial coefficient C(%d, %d) is: %d\n", n, k, binomialCoeff(n, k));

    return 0;
}

// Function to calculate the binomial coefficient
int binomialCoeff(int n, int k)
{
    int res = 1;

    // Since C(n, k) = C(n, n-k)
    if (k > n - k)
        k = n - k;

    // Calculate value of [n*(n-1)*---*(n-k+1)] / [k*(k-1)*---*1]
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}
