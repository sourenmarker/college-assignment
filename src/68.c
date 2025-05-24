#include <stdio.h>

int main() {
    int x = 5;
    printf("Hello, World!\n");

    // Example of using scanf for input and output

    printf("Enter an integer: ");
    scanf("%d", &x);

    if (x > 0) {
        printf("%d is positive\n", x);
    } else {
        printf("%d is not a positive number\n", x);
    }

    return 0;
}
