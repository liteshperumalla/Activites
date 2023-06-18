#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    switch(n){
        case 90 ... 100:
        printf("GRADE A");
        break;
        case 75 ... 89:
        printf("GRADE B");
        break;
        case 60 ... 74:
        printf("GRADE C");
        break;
        case 50 ... 59:
        printf("GRADE D");
        break;
        case 36 ... 49:
        printf("GRADE E");
        break;
        case 0 ... 35:
        printf("GRADE F");
        break;
        default:
        printf("Invalid");

    }
}