#include <stdio.h>
#include <string.h>

int main(){
    int rollno;
    printf("Enter Roll No. : ");
    scanf("%d", &rollno);
    char name[20];
    printf("Enter Name : ");
    scanf(" %[^\n]*c", &name);
    int phy, maths, chem;
    printf("Enter marks of all three subjects : ");
    scanf(" %d%d%d" , &phy, &maths, &chem);
    int total = phy + maths + chem;
    int percentage = total / 3;
    printf("Roll No. : %d", rollno);
    printf("\nName : %s", name);
    printf("\nTotal Marks Obtained : %d", total);
    printf("\nPercentage : %d", percentage);

    return 0;
}