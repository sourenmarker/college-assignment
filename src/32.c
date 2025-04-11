#include <stdio.h>

int main() {
    int i;
    int *ptr;

    ptr = &i;

    printf("The value of i is: %d\n", i);

    // Dereferencing pointer to check if it's valid

    return 0;
}
