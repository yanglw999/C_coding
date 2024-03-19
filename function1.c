#include<stdio.h> 

unsigned long int factor(int n); // declare the function

int main(){ // the return type of main() must be int to return 0 to operating system
     long int p;
     int m = 5;
     p = factor(m);
     printf("factor(%d) = %ld", m, p);
     getchar();
     return 0; // return value of 0 means run correctly
}
unsigned long int factor(int n){ // define the function
         long int product = 1;
         int i; // a bit unlike the for() of JAVA
         for( i = 1; i <= n; i++){
              product *= i;
         }
         return product;
                    
}
