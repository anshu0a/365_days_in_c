  // 1

#include <stdio.h>

int main() {
   int a ; scanf("%d" , &a);
   for(int r = 1 ; r <= a ; r++){
       int sp = a - r ;
       int nu = 1;
       int mi = r - 1 ; 
       for(int c = 1 ; c <= a+r-1 ; c++){
       if(sp > 0 ) {
            printf("  ");
            sp--;
       }
       else {
           if( nu <= r) printf("%d ",nu++);
           else  printf("%d ",mi--);
          
       }
      }
       printf("\n");
   }

    return 0;
}
 // 2

#include <stdio.h>

int main() {
   int a ; scanf("%d" , &a);
   int sp = 0;
   for(int r = 1 ; r <= a ; r++){
       int ki = sp ;
       for(int c = 1 ; c <= a  ; c++){
        if( ki > 0){
            printf(" ");
            ki--;
        } else{
            printf("%d", c);
        }
      }
      sp++;
       printf("\n");
   }

    return 0;
}
 // 3

#include <stdio.h>

int main() {
   int a ; scanf("%d" , &a);
   int sp = a - 1;
   for(int r = 1 ; r <= a ; r++){
       int ki = sp ;
       for(int c = 1 ; c <= a  ; c++){
        if( ki > 0){
            printf(" ");
            ki--;
        } else{
            printf("%d", c);
        }
      }
      sp--;
       printf("\n");
   }

    return 0;
}
