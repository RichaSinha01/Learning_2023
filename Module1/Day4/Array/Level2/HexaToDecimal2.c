#include<stdio.h>
#include <math.h>
#include <string.h>

void HexaToDeci(char hex[]){
    long long decimal = 0, place = 1;
    int i = 0, val, len;
    len = strlen(hex);
    len--;
    for(i=0; hex[i]!='\0'; i++){
        if(hex[i]>='0' && hex[i]<='9'){
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f'){
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F'){
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(16, len);
        len--;
    }
    printf("After Hexa To Decimal Conversion : %lld", decimal);
 
}

int main(){
    char hex[20];
    printf("Enter any hexadecimal number: ");
    gets(hex);
    HexaToDeci(hex);
    return 0;
}