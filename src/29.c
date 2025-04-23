#include <stdio.h>

int main() {
    int i, j;
    for(i = 0; i < 5; i++) {
        printf("Hello World!\n");
        if(i == 3) break; // Exit early
    }
    return 0;
}
