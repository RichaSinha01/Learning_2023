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


int searchArray(const struct Student* students, int size, const char* name) {
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i; // Found at index i
        }
    }
    return -1; // Not found
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

    char searchName[20];
    printf("\nEnter the name to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0'; // Remove trailing newline character

    int index = searchArray(students, size, searchName);
    if (index != -1) {
        printf("Student found at index %d.\n", index);
    } else {
        printf("Student not found.\n");
    }

    free(students);
    return 0;
}
