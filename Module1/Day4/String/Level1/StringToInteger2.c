#include<stdio.h>
#include<string.h>

void StrToInt(char str[]){
    int value = 0;
    for(int i=0; i<strlen(str)-1; i++){
        value = value*10 + (str[i] - 48);
    }
    printf("After Conversion : %d", value);
}

int main(){
    char str[20];
    printf("Enter string : ");
    fgets(str, sizeof(str), stdin);
    StrToInt(str);
    return 0;
}