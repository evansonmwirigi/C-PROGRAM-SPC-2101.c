/*
NAME: EVANSON MWIRIGI
REG NO: CT101/G/26478/25
DESCRIPTION: A FUNCTION TO CALCULATE FARE FOR A BUS
DATE: 21/10/25
*/
#include <stdio.h>
int calculatefare(int distance){
    return distance*50;
}
    int main(){
        int distance;
    printf("Enter distance (km):");
    scanf("%d", &distance);

    printf("Total fare = %dKsh\n",calculatefare);
    return 0;
}





