
int main()
{
    // Declare variables
    int x = 0;
    int y = 0;
    
    // Prompt user for input
    printf("Enter two numbers: ");
    
    // Read inputs from the user
    scanf("%d%d", &x, &y);
    
    // Calculate the sum and product of the two numbers
    int sum = x + y;
    int prod = x * y;
    
    // Print the results
    printf("Sum: %d\nProduct: %d", sum, prod);
    
    return 0;
}