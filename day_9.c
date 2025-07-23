// Input: n = 30
// Output: Pairs of prime numbers whose sum is n
// Example:
// 7 + 23
// 11 + 19
// 13 + 17

#include <stdio.h>

int chk(int m) {
    if (m <= 1) return 0; 
    
    for(int i = 2 ; i < m ; i++){
        if( m % i == 0)return 0;
    }
    return m;
}

int main() {
    int a;
    scanf("%d",&a);
    
    for(int i = 2 ; i <= a/2 ; i++){
        int x = chk(i);
        int y;
        if(x &&( y = chk(a - x))){
            printf("%d + %d\n",x,y);
        }
    }
    return 0;
}
