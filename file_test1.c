#include<stdio.h>
void main(void){
     int a, b;
     double c;
     FILE *input; // FILE must be all capitals
     input = fopen("test1.txt","r");
     fscanf(input, "%d %d %lf",&a, &b, &c );
     fclose(input);
     printf("a = %d;\nb= %d; \n        c= %lf;  \\\\ \"test\"", a,b,c);
     getch();
     }
