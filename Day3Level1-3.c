#include <stdio.h>
int findLargestNumber(int num);
int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNumber = findLargestNumber(num);
    printf("Largest number after deleting a digit: %d\n", largestNumber);

    return 0;
}
int findLargestNumber(int num) {
    int largest = 0;
    int digits[4];
    digits[0] = num / 1000;
    digits[1] = (num % 1000) / 100;
    digits[2] = (num % 100) / 10;
    digits[3] = num % 10;

    int i, j;
    for (i = 0; i < 4; i++) {
        int currentNumber = 0;
        for (j = 0; j < 4; j++) {
            if (j != i) {
                currentNumber = currentNumber * 10 + digits[j];
            }
        }
        if (currentNumber > largest) {
            largest = currentNumber;
        }
    }

    return largest;
}
