#include <stdio.h>

void printExponent(double x) {
    // Type punning with a pointer
    unsigned long long *ptr = (unsigned long long *)&x;
    
    // Extracting the exponent part
    unsigned long long exponent = (*ptr & 0x7FF0000000000000) >> 52;
    
    // Printing the exponent in hexadecimal and binary format
    printf("Exponent (Hex): 0x%llX\n", exponent);
    printf("Exponent (Binary): 0b");
    
    for (int i = 11; i >= 0; i--) {
        printf("%lld", (exponent >> i) & 1);
    }
    
    printf("\n");
}

int main() {
    double x;
    
    printf("Enter number: ");
    scanf("%lf", &x);
    
    printExponent(x);
    
    return 0;
}