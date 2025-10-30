/*
NAME: EVANSON MWIRIGI
REG NO: CT101/26478/25
DATE:29/10/25
DESCRIPTION: A PROGRAM TO CAALCULATE TOTAL NUMBER OF ROOMS OCCUPIED IN A HOTEL
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int totalOccupied = 0;

    srand(time(0)); // Seed random number generator

    for (int branch = 0; branch < 3; branch++) {
        printf("\nBranch %d:\n", branch + 1);
        for (int floor = 0; floor < 5; floor++) {
            int floorOccupied = 0;
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // 0 = vacant, 1 = occupied
                printf("%d ", chain[branch][floor][room]);

                if (chain[branch][floor][room] == 1) {
                    totalOccupied++;
                    floorOccupied++;
                }
            }
            printf(" | Occupied on this floor: %d\n", floorOccupied);
        }
    }

    printf("\nTotal occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}
