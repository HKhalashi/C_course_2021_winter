#include <stdio.h>
#include "mod1.h"
#include "mod2.h"
void print_dots_left_part(dot_pointer p){
    for(int i = 0; i < p.column_index+1 ; i++){
        printf(".");
    }
}
