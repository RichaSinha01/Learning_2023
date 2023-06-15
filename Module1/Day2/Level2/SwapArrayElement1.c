#include <stdio.h>

int main(){
    int n;
    printf("Enter the size of an array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of an array : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<=n/2; i++){
       int temp = arr[i];
       arr[i] = arr[i+2];
       arr[i+2] = temp;
    }
    printf("Array after Swapping : ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}