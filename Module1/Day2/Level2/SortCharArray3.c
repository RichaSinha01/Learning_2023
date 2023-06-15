#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubbleSort(char *names[], int n) {
    int i, j;
    char *temp;
    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                // Swap names[j] and names[j + 1]
                temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
}

int main() {
    char *names[100]; // Maximum 100 names
    int numNames, i;
    
    printf("Enter the number of names: ");
    scanf("%d", &numNames);
    
    printf("Enter the names:\n");
    for (i = 0; i < numNames; i++) {
        names[i] = malloc(100 * sizeof(char)); // Allocate memory for each name
        scanf("%s", names[i]);
    }
    
    bubbleSort(names, numNames);
    
    printf("\nNames after sorting:\n");
    for (i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }
    
    // Free the allocated memory
    for (i = 0; i < numNames; i++) {
        free(names[i]);
    }
    
    return 0;
}