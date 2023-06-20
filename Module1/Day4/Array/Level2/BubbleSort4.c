#include<stdio.h>

void BubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("After sorting : ");
    for(int i=0; i<n; i++){
       printf("%d ", arr[i]);
    }
}

int main(){
    int n;
    printf("Enetr the size of an array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Ener Array Elements : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    BubbleSort(arr, n);
    return 0;
}