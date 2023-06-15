#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a, b;
    printf("Enter numbers : ");
    scanf("%d%d", &a, &b);
    printf("Before swapping value of a = %d and b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping value of a = %d and b = %d\n", a, b);
    return 0;
}