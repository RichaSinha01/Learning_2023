#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

void convertToUpperCase(FILE* source, FILE* destination) {
    int ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(toupper(ch), destination);
    }
}

void convertToLowerCase(FILE* source, FILE* destination) {
    int ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(tolower(ch), destination);
    }
}

void convertToPureUpperCase(FILE* source, FILE* destination) {
    bool capitalizeNext = false;
    //int flag = 0;
    int ch;

    while ((ch = fgetc(source)) != EOF) {
        if (isalpha(ch)) {
            if (capitalizeNext) {
                ch = toupper(ch);
                capitalizeNext = false;
            } else {
                ch = tolower(ch);
            }
        } else if (ch == ' ' || ch == '\n') {
            capitalizeNext = true;
        }

        fputc(ch, destination);
    }
}

void copyFile(FILE* source, FILE* destination) {
    int ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
}

int main() {
    char sourceFile[100];
    char destinationFile[100];
    char option;

    printf("Enter the source file name: ");
    scanf("%s", sourceFile);

    printf("Enter the destination file name: ");
    scanf("%s", destinationFile);

    printf("Enter the option (-u, -l, -s) or press enter for normal copy: ");
    scanf(" %c", &option);

    FILE* source = fopen(sourceFile, "r");
    FILE* destination = fopen(destinationFile, "w");

    if (source == NULL || destination == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    if (option == 'u') {
        convertToUpperCase(source, destination);
    } else if (option == 'l') {
        convertToLowerCase(source, destination);
    } else if (option == 's') {
        convertToPureUpperCase(source, destination);
    } else {
        copyFile(source, destination);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(destination);

    return 0;
}
