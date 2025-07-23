/*
Vehicle Rental System
Write a C program to implement a vehicle booking system using a switch-case statement. The program should:

-> Ask the user to choose the type of vehicle they want to book:

   Press 1 for Two Wheeler
   Press 2 for Three Wheeler
   Press 3 for Four Wheeler

-> Prompt the user to enter the distance to the destination (in kilometers).

-> Based on the selected vehicle type, calculate the bill amount using the following rate per kilometer:

   Vehicle Type	  Code	Rate per KM
   Two Wheeler	   1	₹5 per KM
   Three Wheeler   2	₹8 per KM
   Four Wheeler	   3	₹12 per KM

-> Display the booking details including vehicle type, distance, rate per km, and total bill.

-> If the user enters any other number apart from 1, 2, or 3, display:
   "INVALID BOOKING! Please select a valid vehicle type."
Write a C program to implement a vehicle booking system using a switch-case statement. The program should:

-> Ask the user to choose the type of vehicle they want to book:

   Press 1 for Two Wheeler
   Press 2 for Three Wheeler
   Press 3 for Four Wheeler

-> Prompt the user to enter the distance to the destination (in kilometers).

-> Based on the selected vehicle type, calculate the bill amount using the following rate per kilometer:

   Vehicle Type	  Code	Rate per KM
   Two Wheeler	   1	₹5 per KM
   Three Wheeler   2	₹8 per KM
   Four Wheeler	   3	₹12 per KM

-> Display the booking details including vehicle type, distance, rate per km, and total bill.

-> If the user enters any other number apart from 1, 2, or 3, display:
   "INVALID BOOKING! Please select a valid vehicle type."
*/

#include<stdio.h>
int main(){
    int a;
    float r;
    scanf("%d%f",&a,&r);
    if(a == 1 ){
        printf("You booked a Two Wheeler for %.2f KM.\nRate per KM: 5.00\nTotal Bill: %.2f",r,(float)r*5);
    }else if(a == 2){
printf("You booked a Three Wheeler for %.2f KM.\nRate per KM: 8.00\nTotal Bill: %.2f",r,(float)r*8);
    }else if(a == 3){
printf("You booked a Four Wheeler for %.2f KM.\nRate per KM: 12.00\nTotal Bill: %.2f",r,(float)r*12);
    }else{
        puts("INVALID BOOKING! Please select 1 (Two Wheeler), 2 (Three Wheeler), or 3 (Four Wheeler).");
    }
}
