// Input: n = 4
// Output:
/*
1
2 6
3 7 10
4 8 11 13
*/


#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    
    
    for(int i = 1 ; i <= a ;i++){
        int x = 0 ;
        int p = a ;
       for(int m = i ; m <= i+i-1 ;m++){
           printf("%3d ",i+x);
           x = x + p--; 
    }
    printf("\n");
    }
    return 0;
}
