#include<stdio.h>
// function with multi- return values
void funMultiReturnV(int a, double b, double *product, int *sum);
int main(){
    int m = 3, sumV;
    double n = 2.5, productV;
    
    funMultiReturnV(m, n, &productV, &sumV);
    printf("product = %lf\n\rsum = %d\n\n", productV, sumV);
    getchar();
   return 0; 
}

void funMultiReturnV(int a, double b, double *product, int *sum){
     *product = a * b;
     *sum = a + (int)b;
     printf("the product of %d & %lf is: %lf;\n\
             \rthe sum of %d and %lf is: %d;\n\n",a, b,*product,a, b, *sum);

     
}
