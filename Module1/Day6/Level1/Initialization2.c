#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* input, struct Student* student) {
    sscanf(input, "%d %s %f", &(student->rollno), student->name, &(student->marks));
}

void initializeArray(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0f;
    }
}

void displayArray(const struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
}


int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar(); // Consume newline character

    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    for (int i = 0; i < size; i++) {
        char input[50];
        printf("Enter student details (Roll No Name Marks): ");
        fgets(input, sizeof(input), stdin);
        parseString(input, &(students[i]));
    }

    printf("\n--- Initialized Array ---\n");
    displayArray(students, size);

    free(students);
    return 0;
}
