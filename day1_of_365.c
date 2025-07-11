// Write a C program to reverse a given positive integer number using only if and goto statements

// Sample input : 123
// Sample Output : 321

// Sample input : 4321
// Sample Output : 1234


// Sample input : -123
// Sample Output : Invalid Input

// Sample input : 0
// Sample Output : Invalid Input

#include <stdio.h>

int main() {
    int a ,b=0,c,n = 0,u;
    scanf("%d",&a);
    c = a;
    
 if(a <= 0){
     printf("Invalid Input");
     return 0;
 }
start:
    if (c > 0) {
        c = c / 10;
        b = b + 1;
        goto start;
    }

tat:
    if (b > 0) {
    b = b - 1;
    u = b;
    int my = 1;
    mul:
    if(u > 0){
        my = my*10;
        u = u-1;
        goto mul;
    }
    n += (a % 10) * my ;
    a = a/10 ;
        goto tat;
    }
    
    printf("%d",n);
    return 0;
    
}

