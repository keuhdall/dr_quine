#include<stdio.h>
#define MAIN(content) int main() { content }
MAIN(
FILE*f=fopen("./Grace_child.c", "w+");
char*a="#include<stdio.h>%c#define MAIN(content) int main() { content }%cMAIN(%cFILE*f=fopen(%c./Grace_child.c%c, %cw+%c);%cchar*a=%c%s%c;%cfprintf(f,a,10,10,10,34,34,34,34,10,34,a,34,10,10);)%c";
fprintf(f,a,10,10,10,34,34,34,34,10,34,a,34,10,10);)
