#include <stdio.h>

char getGrade(int score) {
    switch(score) {
        case 90 ... 100:
            return 'A';
        case 75 ... 89:
            return 'B';
        case 60 ... 74:
            return 'C';
        case 50 ... 59:
            return 'D';
        case 36 ... 49:
            return 'E';
        default:
            return 'F';
    }
}

int main() {
    int studentScore;
    printf("Enter a score : ");
    scanf("%d", &studentScore);
    char grade = getGrade(studentScore);

    switch(grade) {
        case 'A':
            printf("Grade A\n");
            break;
        case 'B':
            printf("Grade B\n");
            break;
        case 'C':
            printf("Grade C\n");
            break;
        case 'D':
            printf("Grade D\n");
            break;
        case 'E':
            printf("Grade E\n");
            break;
        default:
            printf("Grade F\n");
            break;
    }

    return 0;
}