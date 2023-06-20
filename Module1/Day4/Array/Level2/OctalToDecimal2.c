#include<stdio.h>

void OctalToDeci(int num){
    int decNum = 0, base = 1, rem;
    while(num > 0){
        rem = num % 10;
        decNum = decNum  + rem * base;
        num = num / 10;
        base = base * 8;
    }
    printf("After Octal to decimal conversion : %d", decNum);
}

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    OctalToDeci(num);
    return 0;
}