#include<stdio.h>

void LinearSearch(int arr[], int n, int key){
    int i=0;
    for(i=0; i<n; i++){
        if(arr[i] == key){
            printf("key %d is found at index : %d", key, i);
            break;
        }
    }
    if(i == n){
        printf("Key isn't present in the array");
    }
}

int main(){
    int n, key;
    printf("Enetr the size of an array : ");
    scanf("%d", &n);
    printf("Enetr the key to be found : ");
    scanf("%d", &key);
    int arr[n];
    printf("Ener Array Elements : ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    LinearSearch(arr, n, key);
    return 0;
}