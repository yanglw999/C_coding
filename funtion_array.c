#include<stdio.h>
void function1(int *d, int element);
void function2(double b[], int num_elem);
double function3(const double b[], int num_elem);

int main(){
    int a[10] ={0,1,2,3,4,5,6,7,8,9};
    double c[] ={2.,4.,6.,8.,10.}; // implicitly default the array size
    
    function1(&a[5], a[8]);// & equal to scanf()
    printf("\na[5] = %d",a[5]);
    
    printf("\nthe updated array c:\n");
    function2(c, 5);
    int j;
    for(j = 0; j < 5; j++) printf("%.2lf, ", c[j]);
    
    double s = function3(c, 5);
    printf("\nsum(c) = %.2lf", s);
    getchar();
   return 0; 
}
// f1 will return a value to *d; the other way to return value
void function1(int *d, int element){
     *d = 100 + element;
}
// f2 changed the element values of original array b with updated values
void function2(double b[], int num_elem){
     int i;
     for(i = 0; i < num_elem; i++)
     b[i] *= 10;
}
// f3 keep the array b original but return a value in a conventional method
double function3(const double b[], int num_elem){
       int i;
       double sum = 0.;
       for(i = 0; i < num_elem; i++)
       sum +=b[i];
       return sum;
}
