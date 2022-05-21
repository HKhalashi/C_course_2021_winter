#include <stdio.h>
#include "mod1.h"
#include "mod3.h"
void print_dots_right_part(dot_pointer p , unsigned bound){
    dot_pointer p_complement ;
    p_complement.row_index = p.row_index;
    p_complement.column_index = bound - p.column_index -1 ;
    for(int i =0; i < (p.column_index - p_complement.column_index) ; i++){
        printf(" ");
    }
    for(int i = p.column_index; i< bound   ; i++) {
        printf(".");
    }

}
