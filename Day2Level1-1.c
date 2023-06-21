#include <stdio.h>

void printExponent(double x) {
    unsigned long long *p = (unsigned long long *)&x; 
    unsigned long long exponent = (*p >> 52) & 0x7FF; 
    printf("Exponent (Hex): 0x%llx\n", exponent);
    printf("Exponent (Binary): 0b");
    for (int i = 11; i >= 0; i--) {
        unsigned long long mask = 1ULL << i;
        putchar((exponent & mask) ? '1' : '0');
    }
    printf("\n");
}

int main() {
    double x;

    printf("Enter a double value: ");
    scanf("%lf", &x);

    printExponent(x);

    return 0;
}

