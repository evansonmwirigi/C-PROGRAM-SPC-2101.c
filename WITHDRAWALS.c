/*
NAME: EVANSON MWIRIGI
REG NO: CT101/G/26478/25
DESCRIPTION: A PROGRAM TO COMPUTE FOR WITHDRAWAL BALANCE
DATE: 07/10/2025

*/
#include <stdio.h>

int main() {
    double balance, withdraw;

    printf("Enter your starting balance: ");//to prompt the user to input the starting balance
    scanf("%lf", &balance);

    while (balance > 0) {
        printf("\nEnter amount to withdraw: ");//to enter withdrawal amount
        scanf("%lf", &withdraw);

        balance -= withdraw;  // subtract withdrawal

        if (balance > 0)
            printf("Remaining balance: %.2f\n", balance);
        else
            printf("Balance is now insufficient.\n");
    }

    printf("\nTransaction ended.\n");
    return 0;
}
