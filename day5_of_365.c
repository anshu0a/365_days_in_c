// Program Questions
// ServiceCenter

// [Title: Vehicle Service Center Management System Using nested else-if ladder]
// -----------------------------------------------------------------------------
// Write a C program for a service center by following the given rules and guidelines.

// This service center only accepts 2-wheelers, 3-wheelers, and 4-wheelers. If any other vehicle comes to you, you must display a message: "This service center does not accept vehicles other than 2-wheelers, 3-wheelers, and 4-wheelers."

// If the vehicle is a 2-wheeler, 3-wheeler, or 4-wheeler, you should ask the user what the age of the vehicle is.

// If the age of the vehicle is above 8 months, only then will you accept the service; otherwise, you must show a message: "Your vehicle service will be done after a while."

// If the vehicle's age is greater than 8 months, display options to the user on the console.

// Options :-
// ----------
// -> Enter 1 for a tire problem
// -> Enter 2 for a fuel problem
// -> Enter 3 for an engine issue
// -> Enter 4 for general services

// If the user enters 1 as input for a tire problem, you should display the message: "How many tires are you facing issues with?" Based on the number of tires, generate the bill.

// For example, if the tire cost is Rs. 400, and the user provides 3 tires, the bill should be generated as Rs. 1200 in the format below.

// Bill Format :-
// ---------------
// -> Name of the owner

// -> Name of the bike

// -> Issue

// -> Bill
// --------
// For fuel problems, the cost is Rs. 1500.

// For engine issues, the cost is Rs. 5000.

// For general servicing, the cost is Rs. 1000.

// Please generate the bill in the above format.

// Enter owner's name: John Doe
// Enter vehicle name: Yamaha FZ
// Enter vehicle type (2 for 2-wheeler, 3 for 3-wheeler, 4 for 4-wheeler): 2
// Enter vehicle age in months: 12

// Select the issue:
// -> Enter 1 for tire problem
// -> Enter 2 for fuel problem
// -> Enter 3 for engine issue
// -> Enter 4 for general services
// Enter your choice: 1
// How many tires are you facing issues with? 2

// ----- Bill Format -----
// -> Name of the owner: John Doe
// -> Name of the bike: Yamaha FZ
// -> Issue: Tire Problem
// -> Bill: Rs. 800.00

#include<stdio.h>
int main(){
    
    float mrp ;
    char name[20];
    puts("Enter owner's name : ");
    fgets(name, sizeof(name), stdin);

    char car[20];
    puts("Enter vehicle name : ");
    fgets(car, sizeof(car), stdin);

    int whl;
    puts("Enter vehicle type (2 for 2-wheeler, 3 for 3-wheeler, 4 for 4-wheeler) : ");
    scanf("%d",&whl);
    if(whl <= 1 || whl > 4){
        puts("This service center does not accept vehicles other than 2-wheelers, 3-wheelers, and 4-wheelers.");
        return 0;
    }

    int age;
    puts("Enter vehicle age in months : ");
    scanf("%d",&age);
    if(age <= 8){
        puts("Your vehicle service will be done after a while.");
        return 0;
    }
    int pro;
    int tyr;
    printf("Select the issue:\n-> Enter 1 for tire problem\n-> Enter 2 for fuel problem\n-> Enter 3 for engine issue\n-> Enter 4 for general services\nEnter your choice:");
    scanf("%d",&pro);

    if(pro == 1){
        puts("How many tires are you facing issues with?");
        scanf("%d",&tyr);
        mrp = tyr * 400;
    }else if(pro == 2){
        mrp = 1500;
    }else if(pro == 3){
        mrp = 5000;
    }else {
        mrp = 1000;
    }
    
printf("----- Bill Format -----\n-> Name of the owner: %s\n-> Name of the bike: %s\n-> Issue: %s\n-> Bill: Rs. %.2f",name,car,(pro == 1) ? "tire problem" : (pro == 2) ? "fuel problem" : (pro == 3) ? "engine issue" : "general services",mrp);
    
    return 0;
}