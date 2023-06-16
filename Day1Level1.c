#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter number 1 :");
    scanf("%d", &a);
    printf("Enter number 2 : ");
    scanf("%d", &b);
    if(a > b){
        printf("a is greater than b");
    }
    else{
        printf("b is grater than a");
    }
}