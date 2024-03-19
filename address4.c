#include<stdio.h>
#include<string.h>
void main(void){
    char *p ;
    char *q;
    char *n;
    char *m;
    char ac[] ={0,1,2,3,4,5,6,7,8,9,};
    char ee[25];
    char ff[25];
    strcpy(ee, "0123456789;");
    strcpy(ff, "0123456789;");
    char *x = &ac; // type 1
    char *y;
    *y = &ac;// wrong
    // type 2
    p = ac; // 3 methods to access the address of ac[]
    q = &ac[0]; 
    n = &ac;
    m = ee;
   // *m = &ee;// wrong 
    //*p = ac;
    *p = 29;
// printf("*p = %s\n",*p);
   printf("p = %d\n",p);
   printf("p = %s\n",p);
   printf("address of p = %p\n",p);
   printf("address of q = %p\n",q);
   printf("address of n = %p\n",n);
   printf("address of *p = %p\n",*p);
   printf("address of ac = %p\n",ac);
   printf("m = %s\n",m);
   printf("address of m = %p\n",m);
   printf("address of ee = %p\n",&ee);
   printf("address of ff = %p\n",ff);
   printf("address of *m = %p\n",*m);
    printf("ac[0] = %d\n",ac[0]);
    printf("address of x = %p\n",x);
    printf("address of y = %p\n",y);
    printf("address of *y = %p\n",*y);
}