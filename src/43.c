#include <stdio.h>

int main() {
    int i;
    printf("Enter 5 positive integers: ");
    scanf("%d %d %d %d %d", &i, &i, &i, &i, &i);
    
    if (i <= 0) {
        printf("At least one number must be greater than 0.\n");
    }
    
    return 0;
}
