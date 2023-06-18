#include<stdio.h>
int main(){
    int n1;
    int n2;
    int n3;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    if(n1 > n2 && n2 > n3){
        printf("The greater number: %d ", n1);
    }
    else if (n2 > n1 && n2 > n3){
        printf("The gretaer number is : %d ", n2);
    }
    else{
        printf("The greater number is : %d ", n3);
    }
    return 0;
}