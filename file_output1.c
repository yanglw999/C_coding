#include<stdio.h>
void main(void){
     int y=2024, m = 02, d = 14;
     double time = 10.25;
     FILE *output;
     output = fopen("test_output.txt", "w");
     fprintf(output, "date: %d-%2d-%2d", y, m, d);
     fprintf(output,"\ntime: %.2lf",time);
     fclose(output);
     }
