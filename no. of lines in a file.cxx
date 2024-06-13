#include <stdio.h>

int main() {
    FILE *file;
    char file_name[100];
    char ch;
    int lines = 0;

    printf("Enter the name of the text file: ");
    scanf("%s", file_name);

    file = fopen(file_name, "r");
    if (file == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }

    fclose(file);

    printf("Number of lines in the file: %d\n", lines);

    return 0;
}