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