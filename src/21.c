#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Even number: %d\n", n);
    } else {
        printf("Odd number: %d\n", n);
    }
}
