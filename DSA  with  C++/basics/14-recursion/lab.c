#include <stdio.h>
#include <sys/types.h>
#include <unistd.h> 
int main() 
{ 
    char *p = "/bin/ls";
    char *a = ".lh";
    char *b = "/home";
    execl(p,p,a,b,NULL);
    return 0; 
}