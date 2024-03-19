#include<stdio.h>
void f(int *P); // *P -> access the address
void g(int k);
void main(){
    int i = 6;
    printf("address of i = %p\n", &i);
    f(&i);
    g(i);
}
void f(int *p){
    printf("address of p = %p\n", p);
    printf("*p = %d\n", *p);
    *p = 26; // *P and i share same address, so when *P changes the value at the address
             // it results in the change of i value
}
void g(int k){
    printf("k = %d\n",k);
}