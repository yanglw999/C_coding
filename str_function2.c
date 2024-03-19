#include<stdio.h>
#include<string.h>
// const int LENGTH = 20; // this has the limit of applicable area
#define LENGTH 20 // the advantage: no limitation on applicable area

void function1(char ee[], char ff[][LENGTH], char *gg, char *hh[], int n_row, int n_hh);
void main(void){
   
    char aa[] = "one-dimensional array.";
    char bb[][LENGTH] = {"two-","dimentional ", "array."};
    char *cc = "Pointer to string constant.";
    char *dd[] = {"Array ","of pointers ", "to string ", "constants."};
    int row_bb, num_elems_dd;

    row_bb = sizeof(bb) / LENGTH;
    num_elems_dd = sizeof(dd) / sizeof(char *);// $$$$

    function1(aa, bb, cc, dd, row_bb, num_elems_dd);

}
void function1(char ee[], char ff[][LENGTH], char *gg, char *hh[], int n_row, int n_hh){
    int i;
    puts(ee);
    for(i = 0; i < n_row; i++) puts(ff[i]);
    puts(gg);
    for(i = 0; i < n_hh; i++) puts(hh[i]);
}