#include <stdio.h>

void printNumbers(int n);
void printSpaces(int n);
void printReverseNumbers(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i;
    for (i = n; i >= 1; i--) {
        printNumbers(i);
        printSpaces((n - i) * 2);
        printReverseNumbers(i);
        printf("\n");
    }

    return 0;
}

void printNumbers(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void printSpaces(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf(" ");
    }
}

void printReverseNumbers(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
}
