#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(void){
    char aa[19];
    char *bb[22];
    char cc[22][19] = {"Example"," String 1 ","Words"};// c allows shortage of strings
    int xx, yy;
    printf("------------------------section 1 calloc------------------------\n");
    strcpy(aa, cc[0]); //cc[0] means the 1st row of 2-d cc
    xx = strlen(aa); // num of element in aa
    bb[0] = (char *) calloc(xx, sizeof(char)); // allocate xx * sizeof(char) bytes to a new space and 
                                  // let bb[0] point at the address of the 1st unit of the new space
    strcpy(bb[0], aa); // let bb[0] point at the first char address of string aa(cc[0])
    puts(bb[0]);
    puts(aa);
    printf("------------------------section 2 malloc------------------------\n");
    strcpy(aa, cc[1]);
    xx = strlen(aa);
    yy = xx * sizeof(char);
    bb[1] = (char *) malloc(yy); //malloc(size of bytes) and (char*) is to make sure it return same types
    strcpy(bb[1], aa);
    puts(bb[1]);
    puts(aa);
    printf("------------------------section 3 realloc------------------------\n");
    strcpy(aa, cc[2]);
    xx = strlen(aa);
    yy = xx * sizeof(char);
    bb[1] = (char*) realloc(bb[1], yy);
    strcpy(bb[1], aa);
    puts(bb[1]);
    free(bb[1]);
}