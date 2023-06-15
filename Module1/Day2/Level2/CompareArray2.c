#include <stdio.h>

int sort(int arr[], int n){
    int i,j;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int arrays_equal(int arr1[], int arr2[], int n, int m){
    sort(arr1,n);
    sort(arr2,m);
    int i;
    for(i = 0; i < n; i++){
        if(arr1[i] != arr2[i]){
            return 0;
        }
        else{
            return 1;
        }
    }
}

int main(){
    int n, m;
    printf("Enter the size of array1 : ");
    scanf("%d",&n);
    printf("Enter the size of array2 : ");
    scanf("%d",&m);
    int arr1[n];
    int arr2[m];
    int i;
    printf("Enter Elements of array1 : ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter Elements of array2 : ");
    for(i = 0; i < m; i++){
        scanf("%d",&arr2[i]);
    }
    if(arrays_equal(arr1, arr2, n, m) == 0){
        printf("Not same");
    }
    else{
        printf("Same");
    }
    return 0;
}