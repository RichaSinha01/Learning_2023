#include<stdio.h>

int CharType(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return 1;
    }
    else if(ch >= 'A' && ch <= 'Z'){
        return 2;
    }
    else if(ch >= '0' && ch <= '9'){
        return 3;
    }
    else if(ch == '#' || ch == '&' || ch == '@'){
        return 4;
    }
    else{
        return 5;
    }
}

int main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    int ans = CharType(ch);
    printf("%d", ans);
}