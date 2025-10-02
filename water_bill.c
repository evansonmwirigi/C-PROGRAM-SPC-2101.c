/*
NAME: FAITH NZEMBI
REG NO: CT101/G/22641/24
DATE: 28/09/25
DESCRIPTION: A program to compute water bill
*/
#include <stdio.h>
int main(){
float units,amount;
      printf("Enter number of water units consumed:");
      scanf("%f",&units);

      if(units<=30){
        amount=units*20;
      }
      else if(units>=31 && units <=60){
        amount=units*25;
      }
      else if(units>60){
        amount=units*30;
      }
      printf("TOTAL WATER BILL:%.2lfKES",amount);


return 0;
}
