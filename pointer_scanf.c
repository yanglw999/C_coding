#include<stdio.h>

int main(){
    int a, b;
    int* p1 = &a; // max
    int* p2 = &b; // min
    printf("Please enter two different integers:\n");
    scanf("%d %d", &a,&b);

    if(*p1 < *p2){
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
    printf("*p1(max) = %d\n*p2(min) = %d\n", *p1, *p2);

    return 0;
}