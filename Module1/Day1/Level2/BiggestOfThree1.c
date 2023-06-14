#include<stdio.h>

int BiggestOfThree(int a, int b, int c){
    if(a > b && a > c){
        return a;
    }
    else if(b > c && b > a){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int a, b, c;
    printf("Enter numbers : ");
    scanf("%d%d%d", &a, &b, &c);
    int result = BiggestOfThree(a, b, c);
    if(result == a){
        printf("Greater number is : %d", a);
    }
    else if(result == b){
        printf("Greater number is : %d", b);
    }
    else{
        printf("Greater number is : %d", c);
    }
}