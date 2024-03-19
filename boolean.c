#include<stdio.h>
#include<string.h>

void bool(int i);

int divide(double a, int b, double *c){
    int flag = 1;
    if(b == 0) 
        flag = 0;
    else{
        *c = a / b;
    }
    return flag;

}
char*boolean[2] = {"false", "true"};

void main(void){
    int m = 7;
    int n = 2;
    double v;
    printf("does the calculation work: ");
    bool(divide(m,n,&v));
    printf("v = %.2lf\n", v);
    printf("does the calculation work: %s", boolean[divide(m,n,&v)]);

}

void bool(int i){
    char* sign;
    char*boolean[2] = {"false", "true"};
    if(i == 0){
        sign = boolean[0];
    }else{
        sign = boolean[1];

    }
    printf(" %s \n", sign);

}
