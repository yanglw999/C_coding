#include<stdio.h>
// pointer comparing 
const int MAX = 3;
int main(){
int var[] = {10,100,200};
int i, *ptr;
ptr = var;
i = 0;
while( ptr <= &var[MAX -2]){ // <=
    printf("Address of var[%d] = %p\n", i, ptr);
    printf("value of var[%d] = %d\n", i, *ptr);
    
    ptr++;
    i++;
}
    return 0;
}