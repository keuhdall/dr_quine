#include<stdio.h>
#include<stdlib.h>
int main(void){
int i = 5;
char*p;
asprintf(&p, "./Sully_%d.c", i-1);
FILE*f=fopen(p, "w+");
char*a="#include<stdio.h>%c#include<stdlib.h>%cint main(void){%cint i = %d;%cchar*p;%casprintf(&p, %c./Sully_%cd.c%c, i-1);%cFILE*f=fopen(p, %cw+%c);%cchar*a=%c%s%c;%cif(i > 0){%cfprintf(f,a,10,10,10,i-1,10,10,34,37,34,10,34,34,10,34,a,34,10,10,10,10,10,10,34,37,37,34,10,34,37,34,10,10,10,10,10);%cfclose(f);%cchar*compile;%cchar*exec;%casprintf(&compile, %cgcc -Wall -Wextra -Werror Sully_%cd.c -o Sully_%cd%c, i-1, i-1);%casprintf(&exec, %c./Sully_%cd%c, i-1);%csystem(compile);%cif (i > 1) system(exec);%c}%c}%c";
if(i > 0){
fprintf(f,a,10,10,10,i-1,10,10,34,37,34,10,34,34,10,34,a,34,10,10,10,10,10,10,34,37,37,34,10,34,37,34,10,10,10,10,10);
fclose(f);
char*compile;
char*exec;
asprintf(&compile, "gcc -Wall -Wextra -Werror Sully_%d.c -o Sully_%d", i-1, i-1);
asprintf(&exec, "./Sully_%d", i-1);
system(compile);
if (i > 1) system(exec);
}
}
