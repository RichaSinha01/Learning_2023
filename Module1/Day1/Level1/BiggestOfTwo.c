#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    if(a>b){
        printf("a is greater");
    }
    else if(b>a){
        printf("b is greater");
    }
    else{
        printf("both are equal");
    }
    return 0;
}