/*
NAME: EVANSON MWIRIGI
REG NO: CT101/G/26478/25
DATE: 6/11/2025
DESCRIPTION: A PROGRAM TO STORE SALES
*/
#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0;

    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open sales.txt\n");
        return 1;
    }

    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(file);

    printf("Total sales for the day: KSh. %.2f\n", total);

    return 0;
}
