#include<stdio.h>

void main(void){
    int i = 10 ;
    int p;
    int a[10];
    int* x = &i; // type 1
    int* y; // type 2
         y = &i;
    int* pr = a;
    printf("address x = %p\n",x);
    printf("address y = %p\n",y);
    printf("address of *x = %p, address saved in *x = %p, value of i = %d\n",&x,x,*x);
    printf("address of *x = %d, address saved in *x = %d, value of i = %d\n",&x,x,*x);
    printf("address i = %p\n",&i);
    *y = 20; // change the vale of i through *yd
    printf("address of *x = %p, address saved in *x = %p, value of i = %d\n",&x,x,*x);
    printf("address of *x = %d, address saved in *x = %d, value of i = %d\n",&x,x,*x);
    
    printf("address a = %p\n", &a); // not recommened for array
    printf("address a = %p\n", a);
    printf("address a[0] = %p\n", &a[0]);
    printf("address saved in pr = %p\n", pr);
    // pointer plus or minus
    printf("address a[1] = %p\n", a[1]); // wrong
    printf("address a[1] = %p\n", &a[1]);
    printf("address saved in pr = %p\n", ++pr); // pr = pr + 1; 1 unit = 4 bytes for int
    printf("address a[2] = %p\n", &a[2]);
    printf(" &a[1]-&a[2] = %x\n", (&a[1]-&a[2]));
    printf(" &a[2]-&a[1] = %x\n", (&a[2]-&a[1]));
}