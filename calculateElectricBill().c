/*
NAME: EVANSON MWIRIGI
REG NO: CT101/G/26478/25
DATE:21/10/2025
DESCRIPTION: A C FUNCTION TO CALCULATE ELECTRIC BILL
*/
#include <stdio.h>
int calculateelectricbill(int units){
    int bill;
    if (units<=100){
        bill=units*10;
        }
        else if (units<=200){
            bill=100*10 + (units-100)*15;
        }
        else {bill=100*10 + (units-100)*15 + (units-200)*20;
        }
        return bill;
 }

int main(){
int units;
printf("Enter units consumed:");
scanf("%d", &units);

printf("Total bill = Ksh, %2d\n", calculateelectricbill(units));


return 0;
}

