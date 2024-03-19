#include<stdio.h>

#define UNIT 2
int main(){
    double s = 0;
    int i = 1;
    while(i <= 7){
            s += (1.0 / i);
            i += UNIT;
    }
    printf("\nsum = %.5f\n", s);
   // getch();
    return 0;
    } 
