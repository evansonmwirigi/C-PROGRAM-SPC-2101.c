/*
Name: Evanson Mwirigi
Reg No:
Description: A program to prompt the user to find volume and surface area
*/
#include<stdio.h>
#define PI 3.14159

int main(){
    float pi,radius,height,surface_area;
    printf("Enter the radius of cylinder:\n");
    scanf("%f",& radius);

    printf("Enter the height of the cylinder:\n");
    scanf("%f",& height);
    //calculate volume
    scanf("volume=PI*radius*radius*height");
    //calculate surface area
    scanf("surface area=2*pi*radius*(radius+height");
    //display results
    printf("Volume of cylinder: %.2f\n", volume");
    printf("surface area of cylinder: %.2f\n",surface_area");
    return 0;

}
