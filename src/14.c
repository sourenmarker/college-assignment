#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int x = 0;
    for (int i = 1; i <= 100; i++) {
        x += 2 * pow(i, 2);
    }
    printf("The sum of the squares is %d\n", x);
    return 0;
}
