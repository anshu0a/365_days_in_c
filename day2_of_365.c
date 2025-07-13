// ❓ Question:
// Write a C program to read three integers from the user and:

// Check if the numbers can form a valid triangle using the triangle inequality rule.

// If valid:

// Calculate the type of triangle:

// Equilateral (all sides equal)

// Isosceles (two sides equal)

// Scalene (all sides different)

// If it is also a right-angled triangle, mention that too.

// If not valid, print "Invalid Triangle".

// 🔸 You must use only if-else, logical, and relational operators.
// 🔸 Don’t use any inbuilt math functions (like pow or sqrt).


#include <stdio.h>
#include <math.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
   
    if(a+b>c && b+c>a && c+a>b){
        printf("valid triangle\n");
    }else{
        printf("not a valid triangle\n");
        return 0;
    }
    
    if(a == b && b == c){
      printf("Equlateral triangle");
    }else if(a == b || b == c || c == a){
      printf("Isosceles triangle");
    }else{
       printf("scalene triangle");
    }
    
    if(a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b ){
      printf("\nright angle triangle");
    }else{
       printf("\nnot a right angle triangle");
    }
    
    return 0;
}



// Write a C program that reads three positive integers and:

// Checks if the numbers form a consecutive sequence (like 5 6 7 or 10 9 8)

// Checks if they form a geometric progression (like 2 4 8 or 81 27 9)

// Checks if they form an arithmetic progression (like 3 5 7 or 100 90 80)

// If none of the above, print "No recognizable pattern."



int main() {
float a, b, c;
int mch = 0;
scanf("%f%f%f",&a,&b,&c);
if(b - a == 1 && c - b == 1 || b - a == -1 && c - b == -1  ){
    puts("consecutive sequence");
    mch = 1;
}
if (fabs((a / b) - (b / c)) < 0.0001){
    puts("geometric progression");
    mch = 1;
}
if(b - a == c - b){
    puts("arithmetic progression");
    mch = 1;
}
    if(!mch){
        printf("not recognizable pattern");
    }
    
    return 0;
}
