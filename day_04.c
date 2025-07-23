// 2.Convert lower / upper/ digit / space / special
// char with ~ / @ / # / $ / * is a sentence 
// eg: asdhh5656AS() => ~~~~####@@**

#include<stdio.h>
#include<ctype.h>

int main() {
char ch[20];
gets(ch);
int cnt = 0;
 start:
if( ch[cnt] == '\0'){
    goto end;
}else{
 if(islower(ch[cnt])) ch[cnt] = '~';
 else if(isupper(ch[cnt]))ch[cnt] = '@';
 else if(isdigit(ch[cnt]))ch[cnt] = '#';
 else if(isspace(ch[cnt]))ch[cnt] = '$';
 else ch[cnt] = '*';

 cnt = cnt+1;
 goto start;
}
end:
printf("%s",ch);
    return 0;
}



// [Title: Electricity Bill Calculator -Using else-if ladder]
// ----------------------------------------------------------
// Write a C program to input electricity unit charges and calculate the total electricity bill according to the following conditions:[using ternary-operator]

// -> For the first 50 units: Rs. 0.50 per unit
// -> For the next 100 units: Rs. 0.75 per unit
// -> For the next 100 units: Rs. 1.20 per unit
// -> For units above 250: Rs. 1.50 per unit

// Additionally, a surcharge of 20% is added to the bill.

// Sample Input :-
// ---------------
// Enter the number of units: 280

// Sample Output :-
// -----------------
// Total electricity bill: Rs. 318.00


#include<stdio.h>
int main(){
    int a;
    float r;
    scanf("%d",&a);
    
    if( a <= 50) r = a*(0.50f);
    else if( a <= 150) r = ( 50*0.50 +(a-50)*(0.75f));
    else if( a <= 250)  r =( 50*0.50 + (100)*(0.75f) +(a-150)*(1.20f));
    else r =  50*0.50 + (100)*(0.75f) +(100)*(1.20f) + (a - 250)*(1.50f);

    printf("Total electricity bill: Rs. %.2f", (r + (r *.2)));

    return 0;
}
