//menu to resturent 


#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
      int amt = 0;
      int q;
      int a;
      char dish[1000] ="";
      char line[100];
      start:
      
      puts("_______________________________________________________________");
      printf("                         CAFE ON WHEEL         Amount = %d/-\n",amt);
      puts("_______________________________________________________________");
      puts("   1. Tea          -     -     -     -     -     -     -   13/-");
      puts("   2. Coffee       -     -     -     -     -     -     -   25/-");
      puts("   3. Dhosa        -     -     -     -     -     -     -   30/-");
      puts("   4. Chicken      -     -     -     -     -     -     -  189/-");
      puts("   5. Chawmin      -     -     -     -     -     -     -   45/-");
      puts("   6. Burger       -     -     -     -     -     -     -   69/-");
      puts("   7. Biriyani     -     -     -     -     -     -     -   99/-");
      puts("   8. Bill");
      puts("   9. cancle");
      puts("   0. Exit");
      puts("_______________________________________________________________");
      puts("_______________________________________________________________");
      printf("What do you wants to order : ");
      scanf("%d",&a);
      if(a < 8){
          printf("Enter quantity of yr order : ");
          scanf("%d",&q);
      }
      switch(a){
          case 1: printf("%d Tea added successfully\n",q); 
          amt += (q*13);
          sprintf(line, "Tea      - (%d)   -   %d/-\n", q,q*13);
          strcat(dish, line);
          break;
          case 2: printf("%d Coffee added successfully\n",q);
          amt += (q*25);
          sprintf(line, "Coffee   - (%d)   -   %d/-\n", q,q*25);
          strcat(dish, line);
          break;
          case 3: printf("%d Dosa added successfully\n",q); 
          amt += (q*30);
          sprintf(line, "Dosa     - (%d)   -   %d/-\n", q,q*30);
          strcat(dish, line);
          break;
          case 4: printf("%d Chicken added successfully\n",q);
          amt += (q*189);
          sprintf(line, "Chicken  - (%d)   -   %d/-\n",q, q*189);
          strcat(dish, line);
          break;
          case 5: printf("%d Chawmin added successfully\n",q);
          amt += (q*45); 
          sprintf(line, "Chowmin  - (%d)   -   %d/-\n", q,q*45);
          strcat(dish, line);
          break;
          case 6: printf("%d Burger added successfully\n",q);
          amt += (q*69); 
          sprintf(line, "Burger   - (%d)   -   %d/-\n", q,q*69);
          strcat(dish, line);
          break;
          case 7: printf("%d Biriyani added successfully\n",q);
          amt += (q*99);
          sprintf(line, "Biriyani - (%d)   -   %d/-\n", q,q*99);
          strcat(dish, line);
          break;
          case 8: printf("%s",dish);
           puts("_______________________________________________________________");
          printf("   your Bill is : %d/- \n",amt);
          amt = 0;
          return 0;
          case 9: printf("Item cancled\n");amt =0; break;
          case 0: printf("Exited");amt += (q*25); return 0;
          default: printf("Not valid options\n");
      }
      goto start;
      
      

    return 0;
}