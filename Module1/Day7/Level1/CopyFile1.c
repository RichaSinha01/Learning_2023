#include<stdio.h>

int main()
{
    char ch, fileName1[20], fileName2[20];
    FILE *fs, *fd;
    printf("Enter Source File Name (with extension): ");
    gets(fileName1);
    fs = fopen(fileName1, "r");
    if(fs == NULL)
    {
        printf("\nError in Opening the file, %s", fileName1);
        return 0;
    }
    printf("Enter Target File Name (with extension): ");
    gets(fileName2);
    fd = fopen(fileName2, "w");
    if(fd == NULL)
    {
        printf("\nError in Opening the file, %s", fileName2);
        return 0;
    }
    ch = fgetc(fs);
    while(ch != EOF)
    {
        fputc(ch, fd);
        ch = fgetc(fs);
    }
    printf("\nFile copied successfully.");
    fclose(fs);
    fclose(fd);
    return 0;
}