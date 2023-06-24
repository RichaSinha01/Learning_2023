#include<stdio.h>
#include<string.h>
#include<ctype.h>

void Toggle(char str[]){
    for(int i=0; i<strlen(str); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = tolower(str[i]);
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = toupper(str[i]);
        }
    }
    printf("String After toggle : %s", str);
}

int main(){
    char str[20];
    printf("Enter string : ");
    fgets(str, sizeof(str), stdin);
    Toggle(str);
    return 0;
}