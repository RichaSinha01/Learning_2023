#include<stdio.h>
#include<string.h>

char *search(char *str, char ch){
    while(*str != '\0'){
        if(*str == ch){
            return str;
        }
        str++;
    }
        return NULL;
}

int main(){
    char str[20], ch, *result;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character to be searched for : ");
    scanf(" %c", &ch);
    result = search(str, ch);
    if(result != NULL){
        printf("Character %c is found at position : %ld", ch, (result - str));
    }
    else{
        printf("Character is not found");
    }
    return 0;
}