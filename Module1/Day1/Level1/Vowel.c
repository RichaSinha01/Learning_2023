#include<stdio.h>

int Vowels(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    char ans = Vowels(ch);
    if(ans == 1){
        printf("Vowels");
    }
    else{
        printf("Not Vowels");
    }
    return 0;
}