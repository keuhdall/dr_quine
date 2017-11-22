#include<stdio.h>
#define ABC DEF
#define GHI JKL
#define MAIN(content) int main() { content }
MAIN(
/*
 a
*/
FILE*f=fopen("./Grace_kid.c", "w+");
char*a="#include<stdio.h>%c#define ABC DEF%c#define GHI JKL%c#define MAIN(content) int main() { content }%cMAIN(%c/*%c a%c*/%cFILE*f=fopen(%c./Grace_kid.c%c, %cw+%c);%cchar*a=%c%s%c;%cfprintf(f,a,10,10,10,10,10,10,10,10,34,34,34,34,10,34,a,34,10,10);)%c";
fprintf(f,a,10,10,10,10,10,10,10,10,34,34,34,34,10,34,a,34,10,10);)
