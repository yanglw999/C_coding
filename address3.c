#include<stdio.h>
int divide(double a, int b, double *c);
void main(void){
    int m = 5;
    int n = 2;
    double v;
    int sign = divide(m, n, &v);
    printf("does the function work correctly? %d and v = %.2lf\n", sign, v);
}
int divide(double a, int b, double *c){
    int flag = 1;
    if(b == 0) 
        flag = 0;
    else{
        *c = a / b;
    }
    return flag;

}