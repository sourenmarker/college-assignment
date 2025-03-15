
// This program takes two command-line arguments and prints their sum
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    printf("%d + %d = %d\n", num1, num2, num1 + num2);

    return 0;
}