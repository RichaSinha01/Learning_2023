#include<stdio.h>

void DeciToOctal(int num, int arr[]){
    int i = 0;
    for(i=0; num > 0; i++){
        arr[i] = num % 8;
        num = num / 8;
    }
    printf("After decimal to Octal conversion : ");
    for(int j = i-1; j>=0; j--){
        printf("%d", arr[j]);
    }
}

int main(){
    int num, arr[20];
    printf("Enter the number : ");
    scanf("%d", &num);
    DeciToOctal(num, arr);
    return 0;
}