#include "mod1.h"
#include "mod4.h"
void dot_pointer_array_initialize(dot_pointer p1[],dot_pointer p2[],  unsigned n){
    for(int i =0, j =n/2; i <= n/2 ; i++ ){

        p1[i].row_index = i;
        p2[i].row_index = i;
        p1[i].column_index = j -i;
        p2[i].column_index = j + i;
    }
    for(unsigned i =(n/2)+1, j1 =0,j2=n-1; j1 != j2 ; i++ ){
        p1[i].row_index = i;
        p2[i].row_index = i;
        j1 = j1 + 1;
        j2 = j2 - 1;
        p1[i].column_index = j1;
        p2[i].column_index = j2;

    }
}
