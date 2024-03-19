#include<stdio.h>

void calculator(double x, double y, double *sum, double *product);
void main(void){
     double s,p;
     calculator(3.2, 5, &s, &p);
     // s and p receive the value from *sum and *product, so using &
     printf("sum = %.2lf\t product = %.2lf\n", s, p); 
     printf("address of s = %p\t address of p = %p", &s, &p);

//getch();
}
void calculator(double x, double y, double *sum, double *product){
     *sum = x + y;
     *product = x * y;
}
