#include <stdio.h>

int bit_operations(int num, int oper_type) {
    if (oper_type == 1) {
        // Set 1st bit
        num |= (1 << 0);
    }
    else if (oper_type == 2) {
        // Clear 31st bit
        num &= ~(1 << 30);
    }
    else if (oper_type == 3) {
        // Toggle 16th bit
        num ^= (1 << 15);
    }

    return num;
}

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int oper_type;
    printf("Enter operator value : ");
    scanf("%d", &oper_type);

    int result = bit_operations(num, oper_type);

    printf("Result: %d\n", result);

    return 0;
}