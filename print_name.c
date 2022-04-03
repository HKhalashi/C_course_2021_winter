#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char s[40] = "Hello, ";
    char *name;
    puts("What is your name?");
    scanf("%ms",&name);
    printf("%s%s!\n",s , name);
    free(name);

    return 0 ;
}