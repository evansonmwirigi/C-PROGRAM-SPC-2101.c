/*
NAME: EVANSON MWIRIGI
REG NO: CT101/G/26478/25
DESCRIPTION: A PROGRAM TO INPUT PASSWORD TO UNLOCK
DATE: 07/10/2025
*/
#include <stdio.h>
#include <string.h>

int main() {
    char password[20];

    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, "1234") != 0);

    printf("Access Granted\n");
    return 0;
}
