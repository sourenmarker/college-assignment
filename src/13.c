//C program to find GCD of two numbers using recursion
#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a%b);
}
int main()
{
    int a = 12;
    int b = 15;
    printf("GCD of %d and %d is %d", a, b, gcd(a, b));
    return 0;
}