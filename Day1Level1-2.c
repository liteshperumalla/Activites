#include<stdio.h>
int main(){
    int n;
    printf("Enter the grade: ");
    scanf("%d", &n);
    if(n >=90 && n <=100){
        printf("Grade A");
    }
    else if(n >= 75 && n<=89){
        printf("Grade B");
    }
    else if(n>=60 && n<=74){
        printf("Grade C");
    }
    else if(n>=50 && n<=59){
        printf("Grade D");
    }
    else if(n>=0 && n <=49){
        printf("Grade E");
    }
    else{
        printf("Invalid Input");
    }

}