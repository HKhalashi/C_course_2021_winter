#include<stdio.h>
#include "mod1.h"
#include "mod2.h"
#include "mod3.h"
#include "sho.h"
int main(){
    int n;
    n = 105;
    if(n % 2 == 0 ){
        n = n+1;
    }
    dot_pointer p1[n];
    dot_pointer p2[n];
    dot_pointer_array_initialize(p1,p2,n);
    for(int i = 0 ; i < n ; i++){
        print_dots_left_part(p1[i] );
        print_dots_right_part(p2[i], n);
        printf("\n");
    }

    return 0;}

