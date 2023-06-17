#include<stdio.h>

int Reverse(int arr[], int n){
    printf("Array after reverse : ");
    for(int i=n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
}

int main(){
    int n;
    printf("Enter the size of an array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of an array : ");
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    Reverse(arr, n);
    return 0;
}