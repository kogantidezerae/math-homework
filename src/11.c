#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Prompt user for input
    printf("Enter two numbers: ");

    // Initialize variables
    int num1, num2;
    scanf("%d%d", &num1, &num2);

    // Calculate sum, product, and average
    int sum = num1 + num2;
    int product = num1 * num2;
    float average = (float)sum / 2.0;

    // Print results
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    printf("Average: %.2f\n", average);

    return 0;
}
