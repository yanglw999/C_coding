#include<stdio.h>
#include<string.h>
void main(void){
    char *pointer_var;
    char *pointer_arr[5];

    char bb[25],     ee[25],      ff[30],    dd[5][30];
    int i, j;

    strcpy(ee, "This is a sample string;");
    strcpy(ff, "Another string");

    // method 1
    strcpy(bb, ee);
    strcpy(dd[0], ff);
    strcpy(dd[1], ee);

    //method 2 $$$
    pointer_var = ee; // Let the pinter_var point at the address of 1st element of ee 
    pointer_arr[0] = ff; // Let the pointer_arr[0] point at the  the address of 1st element of ff
    pointer_arr[1] = ee;

    printf("------------------printing using puts---------------\n");
    puts(pointer_var);
    puts(bb);
    puts(pointer_arr[0]);
    puts(dd[0]);
    
    printf("--------------------printing using putchar---------------------\n");
    for(i = 0; i < 10; i++ ) putchar(bb[i]);
    putchar('\n');
    // *pinter_var is not a 1-D array, but we can still using it as an array to traverse
    for(i = 0; i < 10; i++ ) putchar(pointer_var[i]); 
    putchar('\n');
    printf("------traverse the string saving in point_arr[] using putchar--------\n");
    for(i = 0; i < 2; i++){
        // *pointer_arr[] looks like a 1-D array, but can be used as 2-D array
        for(j = 0; j < 10; j++) putchar(pointer_arr[i][j]);
        putchar('\n');
    }
     for(i = 0; i < 2; i++){
        for(j = 0; j < 10; j++) putchar(dd[i][j]);
        putchar('\n');
    }
}