/*
NAME: EVANSON MWIRIGI
REG NO:CT101/G/26478/25
DATE:29/09/25
DESCRIPTION:A PROGRAM TO CHECK IF A STUDENT IS ELIGIBLE TO SIT FOR AN EXAM
*/
#include<stdio.h>
int main(){
    int Attendance,average_marks;
    printf("Enter Attendance:");
    scanf("%d",&Attendance);

    printf("Enter average_marks:");
    scanf("%d",&average_marks);

    if (Attendance>=75 && average_marks>=40){
        printf("ELIGIBLE\n");}

    else if(Attendance<=74 && average_marks<=39){
        printf("NOT ELIGIBLE\n");
    }

    return 0;

}
