#include <stdio.h> 

int countSetBits(int num){ 
    int count = 0; 
    while (num){ 
        count += num & 1; 
        num >>= 1; 
    } 
    return count; 
} 

int main(){ 
    int num; 
    int i; 
    printf("Enter number of element: "); 
    scanf("%d", &num); 
    unsigned int a[num]; 
    printf("Enter element: \n"); 
    for(i=0;i<num ;i++){ 
        scanf("%u", &a[i]); 
    } 
    int numElements = sizeof(a) / sizeof(a[0]); 
    int totalSetBits = 0; 
    for (int i = 0; i < numElements; i++){ 
        totalSetBits += countSetBits(a[i]); 
    } 
    printf("Total number of set bits in the array: %d\n", totalSetBits); 
    return 0; 
}