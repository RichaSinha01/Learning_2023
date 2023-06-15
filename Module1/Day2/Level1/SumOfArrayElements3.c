#include <stdio.h>

int main(){
    int n, sum = 0;
    printf("Enter the size of an array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Element : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i=i+2){
        sum += arr[i];
    }
    printf("Sum Of the alternate elements of an array : %d", sum);
}