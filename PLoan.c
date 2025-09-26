/*
NAME: EVANSON MWIRIGI
REG NO: CT101/G/26478/25
DESCRIPTION: A program to compute the loan
*/
#include <stdio.h>
int main(){
    int age,income;
    printf("Enter age:\n");
    scanf("%d",& age);

    printf("Enter income:\n");
    scanf("%d",& income);

    if(age>=21 & income>=21000){
        printf("Congratulations, you qualify for the loan\n");}
        else{
            printf("Unfortunately we are unable to offer you a loan at this time\n");
        }
        return 0;
    }
