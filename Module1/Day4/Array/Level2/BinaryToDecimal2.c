#include<stdio.h>

void BinaryToDeci(int num){
    int decNum = 0, base = 1, rem;
    while(num > 0){
        rem = num % 10;
        decNum = decNum  + rem * base;
        num = num / 10;
        base = base * 2;
    }
    printf("After Binary to decimal conversion : %d", decNum);
}

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    BinaryToDeci(num);
    return 0;
}