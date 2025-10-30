
/*
NAME: EVANSON MWIRIGI
REG NO: CT101/G/26478/25
DATE: 29/10/25
DESCRIPTION:  A PROGRAM TO DISPLAY THE NUMBER OF ROOMS VACANT IN A HOTEL
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int occupied, vacant;

    srand(time(0));
    for (int floor = 0; floor < 5; floor++) {
        occupied = vacant = 0;
        printf("\nFloor %d:\n", floor + 1);
        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;
            printf("%d ", occupancy[floor][room]);

            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("\nOccupied rooms: %d", occupied);
        printf("\nVacant rooms: %d\n", vacant);
    }

    return 0;
}
