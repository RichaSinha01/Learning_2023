#include <stdio.h>
#include <math.h>

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largest = 0;

    // Iterate through each digit and delete it once
    for (int i = 0; i < 4; i++) {
        int temp = number / (int)pow(10, i + 1) * (int)pow(10, i) + number % (int)pow(10, i);
        if (temp > largest) {
            largest = temp;
        }
    }

    printf("The largest number after deleting a digit is: %d\n", largest);

    return 0;
}