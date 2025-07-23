// 1.Finding lower / upper/ digit / space / special
// char.
// 2.Convert lower / upper/ digit / space / special
// char with ~ / @ / # / $ / *



#include <stdio.h>

int main() {
char ch;
scanf("%ch",&ch);
 if(ch >= 'a' && ch <= 'z')printf("%c",'~');
 else if(ch>='A' && ch<='Z')printf("%c",'@');
 else if(ch>='0' && ch<='9')printf("%c",'#');
 else if(ch == ' ')printf("%c",'$');
 else printf("%c",'*');
    return 0;
}


// 3. Read week day name and find the week day
// no.
// Eg:
// Sunday - 1

// st day of week

// Saurday – 7

// th day of week




#include <stdio.h>
#include <string.h>

int main() {
    char ch[15];
    int cnt = 0;
    scanf("%s", ch);

    if (strcmp(ch, "sunday") == 0)cnt=1;
    else if (strcmp(ch, "monday") == 0)cnt=2;
    else if (strcmp(ch,"tuesday")==0)cnt=3;
    else if (strcmp(ch,"wednesday")==0)cnt=4;
    else if (strcmp(ch,"thursday")==0)cnt= 5;
    else if (strcmp(ch,"friday")==0)cnt=6;
    else if (strcmp(ch,"saturday")==0)cnt=7;
    else {
        puts("Not a day");
        return 0;
    }
     printf("%d day of week\n", cnt);

    return 0;
}


// 4. Read a month no and find the season.
// Mar-jun – summer
// Jul-oct – rainly
// Nov-feb - winter



#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d",&a);

    if (a >= 3 && a < 7) puts("Summer");
    else if (a >= 7 && a < 11) puts("Rainy");
    else if (a >= 11 && a < 3) puts("Winter");
    else puts("Invalid months");

    return 0;
}


