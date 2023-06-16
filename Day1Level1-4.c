#include <stdio.h>

int main() {
    // Declare variables
    float number1, number2, result;
    char operator;

    // Read input from the user
    printf("Enter Number1: ");
    scanf("%f", &number1);
    printf("Enter the operator: ");
    scanf(" %c", &operator);
    printf("Enter Number2: ");
    scanf("%f", &number2);
    switch (operator) {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            if (number2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1;  
            }
            result = number1 / number2;
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1;  
    }
    printf("Result: %.2f\n", result);

    return 0;
}
