#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    int *arr;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    arr = (int *)malloc(sizeof(int) * size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }

    printf("Sum of alternate elements: %d\n", sum);

    free(arr);
    return 0;
}
