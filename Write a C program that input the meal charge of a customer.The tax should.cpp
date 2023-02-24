#include <stdio.h>

// Function to calculate the total bill
float total_bill(float meal_charge)
{
    float tax, tip, total;

    // Calculate the tax
    tax = meal_charge * 0.2;

    // Calculate the tip
    tip = (meal_charge + tax) * 0.15;

    // Calculate the total bill
    total = meal_charge + tax + tip;

    return total;
}

int main()
{
    float meal_charge, total;

    // Input the meal charge
    printf("Enter the meal charge: ");
    scanf("%f", &meal_charge);

    // Calculate and display the total bill
    total = total_bill(meal_charge);
    printf("Total bill: $%.f\n", total);

    return 0;
}
