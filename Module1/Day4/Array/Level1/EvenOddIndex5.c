#include<stdio.h>

void EvenOdd(int arr[], int n){
    int even=0, odd=0;
    for(int i=0; i<n; i++){
        if(i % 2 == 0){
            even += arr[i];
        }
        if(i % 2 != 0){
            odd += arr[i];
        }
    }
    int Diff = even - odd;
    printf("Difference between sum of even and odd elements is : %d", Diff);
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
    EvenOdd(arr, n);
    return 0;
}