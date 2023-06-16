#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter number 1 :");
    scanf("%d", &a);
    printf("Enter number 2 :");
    scanf("%d", &b);
    (a > b) ? printf("a is greater than b") : printf("b is greater than b");
}