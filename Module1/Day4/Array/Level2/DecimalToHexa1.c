#include<stdio.h>

void DeciToHexa(int num, int arr[]){
    int i = 0;
    for(i=0; num > 0; i++){
        arr[i] = num % 16;
        num = num / 16;
    }
    printf("After decimal to Hexa conversion : ");
    for(int j = i-1; j>=0; j--){
        printf("%d", arr[j]);
    }
}

int main(){
    int num, arr[20];
    printf("Enter the number : ");
    scanf("%d", &num);
    DeciToHexa(num, arr);
    return 0;
}