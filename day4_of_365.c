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
