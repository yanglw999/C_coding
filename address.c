#include<stdio.h>

void main(void){
    int i;
    int p;
    int a[10];
    int *x = &i; // type 1
    int *y; // type 2
    y = &i;
    printf("address *x = %p\n",x);
    printf("address y = %p\n",y);
    printf("address i = %p\n",&i);
    printf("address p = %p\n", &p);
    printf("address a = %p\n", &a);
    printf("address a = %p\n", a);
    printf("address a[0] = %p\n", &a[0]);
    printf("address a[1] = %p\n", a[1]);
    printf("address a[1] = %p\n", &a[1]);
     printf("address a[2] = %p\n", &a[2]);
      printf("address a[3] = %p\n", &a[3]);
       printf("address a[4] = %p\n", &a[4]);

}