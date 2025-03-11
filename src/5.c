    #include <stdio.h>
    int main()
    {
        // Declare variables
        int num1 = 0;
        int num2 = 0;
        int sum = 0;

        // Ask the user for two numbers
        printf("Enter two numbers: ");
        scanf("%d%d", &num1, &num2);

        // Calculate the sum of the two numbers
        sum = num1 + num2;

        // Print the result
        printf("The sum is %d\n", sum);

        return 0;
    }