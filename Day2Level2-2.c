#include<stdio.h>
#include<stdlib.h>
int main(){
    int size1;
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    int size2;
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    int *arr;
    int *arr2;
    arr = (int *)malloc(sizeof(int) * size1);
    arr2 = (int *)malloc(sizeof(int) * size2);
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    if(size1 != size2){
        printf("The size is not equal ");
    }
    for(int i=0; i< size1; i++){
        if(arr[i] == arr2[i]){
            printf("Same\n");
        }
        else if{
            printf("Not same\n ");
        }
    }
    return 0;

}