#include <stdio.h>

int main(){
    int num1;
    printf("Enter number1 : ");
    scanf("%d", &num1);
    char op;
    printf("Enter operator : ");
    scanf(" %c", &op);
    int num2;
    printf("Enter number2 : ");
    scanf("%d", &num2);
    int sum, sub, mul, div, mod;
    switch(op){
        case '+': sum = num1 + num2;
                  printf("Sum is : %d", sum);
                  break;
        case '-': sub = num1 - num2;
                  printf("Subtraction is : %d", sub);
                  break;
        case '*': mul = num1 * num2;
                  printf("Multiplication is : %d", mul);
                  break;
        case '/': div = num1 / num2;
                  printf("Division is : %d", div);
                  break;
        case '%': mod = num1 % num2;
                  printf("Modulous is : %d", mod);
                  break;
        default : printf("Invalid operator");
                  break;
    }
    return 0;
}