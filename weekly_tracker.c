/*
NAME: EVANSON MWIRIGI
REG NO: CT101/G/26478/25
DATE: 29/10/25
DESCRIPTION: A PROGRAM TO RECORD TOTAL WEEKLY REVENUE FOR A HOTEL
*/
#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0, average;

    // Input revenue for 7 days
    for (int i = 0; i < 7; i++)/*Input revenue for 7 days*/
        {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }


    average = total / 7;//calculating average

    printf("\nTotal Weekly Revenue: %.2f", total);
    printf("\nAverage Daily Revenue: %.2f\n", average);

    return 0;
}

