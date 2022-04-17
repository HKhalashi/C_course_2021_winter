#include <stdio.h>
#include <string.h>
int main(int argc,const char *argv[])
{
    int total = 0;
   for(int i =0 ; i < argc ; i++){
    total = total + (int)strlen(argv[i]);
       }
    printf("argc = %d\n",argc);
    printf("total = %d\n", total);
    char a[total];
    for(int i = 0; i < argc ; i++){
    strcat(a , argv[i]);
    }
    printf("%s\n", a);

  return 0;
}
