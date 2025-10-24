/*
NAME: EVANSON MWIRIGI
REG NO: CT101/G/26478/25
DATE: 21/10/25
DESCRIPTION: A PROGRAM TO CONVERT FARENHEIT TO CELCIUS
*/
#include <stdio.h>
float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float F;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);

    printf("Temperature in Celsius = %.2f\n", convertToCelsius(F));
    return 0;
}
