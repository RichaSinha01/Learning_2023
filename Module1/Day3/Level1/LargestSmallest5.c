#include <stdio.h>

void findSmallestAndLargestDigits(int numbers[], int length) {
    for (int i = 0; i < length; i++) {
        if (numbers[i] < 10) {
            printf("Not Valid\n");
            continue;
        }

        int number = numbers[i];
        int smallestDigit = 9;
        int largestDigit = 0;

        while (number != 0) {
            int digit = number % 10;
            if (digit < smallestDigit) {
                smallestDigit = digit;
            }
            if (digit > largestDigit) {
                largestDigit = digit;
            }
            number /= 10;
        }

        printf("%d and %d\n", smallestDigit, largestDigit);
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    findSmallestAndLargestDigits(numbers, n);

    return 0;
}
