#include <stdio.h>

void FirstHalf(int n);
void Spaces(int n);
void SecondHalf(int n);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i;
    for (i = n; i >= 1; i--) {
        FirstHalf(i);
        Spaces(n - i);
        SecondHalf(i);
        printf("\n");
    }

    return 0;
}

void FirstHalf(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void Spaces(int n) {
    int i;
    for (i = 1; i <= 2 * n; i++) {
        printf(" ");
    }
}

void SecondHalf(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
}