#include<stdio.h>
void swap(int *pa, int *pb);
void main(void){
    int a = 5;
    int b = 6;
    //swap(a, b);
    //print("a = %d\n", a);
    //print("b = %d\n", b);
    swap(&a, &b); // return two values
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}
void swap(int *pa, int *pb){
    int t = *pa;
    *pa = *pb;
    *pb = t;
}