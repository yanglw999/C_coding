#include<stdio.h>
void main(void){
     int a = 10, b = 20, c = 30;
     a = c++; //
     b = a++;
     c = b++;
     printf("a = %-d,\nb = %-d,\nc = %-d,", a, b ,c);
     
     printf("\n---------------------------------\n");
     
      a = 10; b = 20; c = 30;
     a = ++c;
     b = ++a;
     c = ++b;
     printf("\na = %-d,\nb = %-d,\nc = %-d,", a, b ,c);
     getch();
     }
