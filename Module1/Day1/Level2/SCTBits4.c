#include <stdio.h>

int bit_operations(int num, int oper_type, int pos) {
    if (oper_type == 1) {
        // Set 2 bits from nth bit position
        int mask = (1 << 2) - 1; // Create a mask with 2 bits set (0b11)
        mask = mask << pos; // Shift the mask to the nth bit position
        num = num | mask; // Perform bitwise OR to set the bits
    } else if (oper_type == 2) {
        // Clear 3 bits from nth bit position
        int mask = (1 << 3) - 1; // Create a mask with 3 bits set (0b111)
        mask = mask << pos; // Shift the mask to the nth bit position
        mask = ~mask; // Invert the mask
        num = num & mask; // Perform bitwise AND to clear the bits
    } else if (oper_type == 3) {
        // Find MSB bit position and toggle MSB
        int msb_position = 31;
        while (((num >> msb_position) & 1) == 0) {
            msb_position--;
        }
        num = num ^ (1 << msb_position);
    }

    return num;
}

int main(){
    int num, pos;
    printf("Enter a number and position : ");
    scanf("%d%d", &num, &pos);
    int oper_type;
    printf("Enter operator value : ");
    scanf("%d", &oper_type);

    int result = bit_operations(num, oper_type, pos);

    printf("Result: %d\n", result);

    return 0;
}