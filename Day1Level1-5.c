#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            num = num | (1 << 0);  
            break;
        case 2:
            num = num & ~(1 << 30);  
            break;
        case 3:
            num = num ^ (1 << 15);  
            break;
        default:
            printf("Error: Invalid operation type.\n");
            return -1;  
    }

    return num;
}

int main() {
    int num, oper_type;
    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);
    printf("Enter the operation type (1 for Set, 2 for Clear, 3 for Toggle): ");
    scanf("%d", &oper_type);
    int result = bit_operations(num, oper_type);
    if (result != -1) {
        printf("Result: %d\n", result);
    }

    return 0;
}
