/*
NAME: EVANSON MWIRIG
REG NO: CT101/G/26478/25
DATE: 6/11/2025
*/
#include <stdio.h>

int main() {
    FILE *file;
    char title[100];
    char choice;

    file = fopen("borrowed_books.txt", "a"); // append mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    do {
        printf("Enter book title: ");
        scanf(" %[^\n]", title); // read string with spaces

        fprintf(file, "%s\n", title); // write to file
        printf("Book title stored successfully.\n");

        printf("Add another title? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    fclose(file); // close file
    printf("All records saved in borrowed_books.txt\n");

    return 0;
}
