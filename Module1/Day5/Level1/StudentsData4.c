#include <stdio.h>
#include<stdlib.h>

struct student {
    char Name[50];
    int rollno;
    float marks;
};

typedef struct student student;

int main() {
    int i;
    printf("Enter information of students:\n");
    student *ptr;
    int noOfRecords;
    printf("Enter the number of records: ");
    scanf("%d", &noOfRecords);

    // Memory allocation for noOfRecords structures
    ptr = (student *)malloc(noOfRecords * sizeof(student));
    for (int i = 0; i < noOfRecords; ++i){
        //ptr->rollno = i + 1;
        printf("\n Enter Roll number : ");
        scanf("%d", &(ptr + i)->rollno);
        printf("Enter Name: ");
        scanf("%s", &(ptr + i)->Name);
        printf("Enter marks: ");
        scanf("%f", &(ptr + i)->marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    printf("Roll number    Name      Marks ");
    for (i = 0; i < noOfRecords; ++i) {
        printf("\n    %d          %s     %.1f", (ptr + i)->rollno, &(ptr + i)->Name, (ptr + i)->marks);
    }
    return 0;
}