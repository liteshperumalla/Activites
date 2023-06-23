#include <stdio.h>

void findSmallestAndLargestDigits(int numbers[], int size, int* smallest, int* largest);
int getSmallestDigit(int number);
int getLargestDigit(int number);

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int smallest, largest;
    findSmallestAndLargestDigits(numbers, n, &smallest, &largest);

    printf("Smallest digit: %d\n", smallest);
    printf("Largest digit: %d\n", largest);

    return 0;
}

void findSmallestAndLargestDigits(int numbers[], int size, int* smallest, int* largest) {
    int smallestDigit = 9;
    int largestDigit = 0;

    for (int i = 0; i < size; i++) {
        int currentNumber = numbers[i];

        int currentSmallestDigit = getSmallestDigit(currentNumber);
        if (currentSmallestDigit < smallestDigit) {
            smallestDigit = currentSmallestDigit;
        }

        int currentLargestDigit = getLargestDigit(currentNumber);
        if (currentLargestDigit > largestDigit) {
            largestDigit = currentLargestDigit;
        }
    }

    *smallest = smallestDigit;
    *largest = largestDigit;
}

int getSmallestDigit(int number) {
    int smallestDigit = 9;

    while (number > 0) {
        int digit = number % 10;
        if (digit < smallestDigit) {
            smallestDigit = digit;
        }
        number /= 10;
    }

    return smallestDigit;
}

int getLargestDigit(int number) {
    int largestDigit = 0;

    while (number > 0) {
        int digit = number % 10;
        if (digit > largestDigit) {
            largestDigit = digit;
        }
        number /= 10;
    }

    return largestDigit;
}
