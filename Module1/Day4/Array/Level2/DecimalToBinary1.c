#include<stdio.h>

void DeciToBinary(int num, int arr[]){
    int i = 0;
    for(i=0; num > 0; i++){
        arr[i] = num % 2;
        num = num / 2;
    }
    printf("After decimal to binary conversion : ");
    for(int j = i-1; j>=0; j--){
        printf("%d", arr[j]);
    }
}

int main(){
    int num, arr[20];
    printf("Enter the number : ");
    scanf("%d", &num);
    DeciToBinary(num, arr);
    return 0;
}