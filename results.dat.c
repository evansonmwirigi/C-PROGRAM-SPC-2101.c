/*
NAME: EVANSON MWIRIGI
REG NO: CT101/G/26478/25
DATE: 6/11/2025
DESCRIPTION: A PROGRAM TO STORE REUSLTS
*/
#include <stdio.h>

struct Student {
    char name[50];
    char regNo[20];
    float marks;
};

int main() {
    FILE *file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    struct Student s;

    printf("STUDENT RESULTS\n");
    printf("---------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, file)) {
        printf("Name: %s\n", s.name);
        printf("Reg No: %s\n", s.regNo);
        printf("Marks: %.2f\n\n", s.marks);
    }

    fclose(file);
    return 0;
}
