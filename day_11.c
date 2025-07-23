// Home work:
// 1. finding no of digits using loop
// 2. print first and last digits of given no.
// eg: 2018  8 last digit , 2 first digit.
// 3. Finding max, min digits of given no.
// Eg: 2375  7 max, 2 min

#include<stdio.h>
int main(){
    int a, cnt = 0;
    scanf("%d",&a);
    if(a < 0 ){
        a = -a;
    }else if(a == 0){
        cnt = 1;
    }
    while(a > 0){
       cnt++;
       a = a/10;
    }
    printf("Count of the digits is : %d",cnt);
    
}
