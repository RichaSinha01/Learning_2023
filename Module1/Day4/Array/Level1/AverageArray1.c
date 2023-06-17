#include<stdio.h>

int Average(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int avg = sum / n;
    return avg;
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
    int ans  = Average(arr, n);
    printf("Average of the array elements is : %d", ans);
    return 0;
}