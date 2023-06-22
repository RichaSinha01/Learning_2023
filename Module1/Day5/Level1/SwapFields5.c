#include <stdio.h>

typedef struct {
    int field1;
    int field2;
} MyStruct;

void swapStructFields(MyStruct *s1, MyStruct *s2) {
    MyStruct temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int main() {
    MyStruct struct1, struct2;

    printf("Enter the value for field1 of struct1: ");
    scanf("%d", &struct1.field1);

    printf("Enter the value for field2 of struct1: ");
    scanf("%d", &struct1.field2);

    printf("Enter the value for field1 of struct2: ");
    scanf("%d", &struct2.field1);

    printf("Enter the value for field2 of struct2: ");
    scanf("%d", &struct2.field2);

    printf("\nBefore swapping:\n");
    printf("Struct1: field1 = %d, field2 = %d\n", struct1.field1, struct1.field2);
    printf("Struct2: field1 = %d, field2 = %d\n", struct2.field1, struct2.field2);

    swapStructFields(&struct1, &struct2);

    printf("\nAfter swapping:\n");
    printf("Struct1: field1 = %d, field2 = %d\n", struct1.field1, struct1.field2);
    printf("Struct2: field1 = %d, field2 = %d\n", struct2.field1, struct2.field2);

    return 0;
}