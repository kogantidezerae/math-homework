#include <stdio.h>
int main() {
    int i;
    printf("Enter the number of rows: ");
    scanf("%d", &i);
    if (i <= 0) {
        printf("Invalid input. Rows must be a positive integer.\n");
    } else {
        for (i = 1; i <= i; ++i) {
            for (int j = i; j >= 1; --j) {
                printf("* ");
            }
            printf("\n");
        }
    }
}
