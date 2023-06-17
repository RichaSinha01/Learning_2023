#include<stdio.h>

int Max(int arr[], int n){
    int max =arr[0];
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Maximum Element in an array : %d", max);
    printf("\nMinimum Element in an array : %d", min);
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
    Max(arr, n);
    return 0;
}