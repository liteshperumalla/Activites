#include<stdio.h>
#include<stdlib.h>

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

    for (int i = 0; i < size - 1 - (size % 2); i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    printf("Swapped array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }

    free(arr);
    return 0;
}
