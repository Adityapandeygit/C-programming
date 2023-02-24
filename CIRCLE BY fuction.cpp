#include <stdio.h>
#include <math.h>

// Function prototype
float calculateArea(float radius);
float calculateDiameter(float radius);
float calculateCircumference(float radius);

int main()
{
  float radius;

  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  // Call the functions to calculate the area, diameter, and circumference
  float area = calculateArea(radius);
  float diameter = calculateDiameter(radius);
  float circumference = calculateCircumference(radius);

  // Print the results
  printf("Area: %.2f\n", area);
  printf("Diameter: %.2f\n", diameter);
  printf("Circumference: %.2f\n", circumference);

  return 0;
}

// Function to calculate the area of a circle
float calculateArea(float radius)
{
  return M_PI * radius * radius;
}

// Function to calculate the diameter of a circle
float calculateDiameter(float radius)
{
  return 2 * radius;
}

// Function to calculate the circumference of a circle
float calculateCircumference(float radius)
{
  return 2 * M_PI * radius;
}
