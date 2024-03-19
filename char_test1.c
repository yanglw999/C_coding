#include<stdio.h>
 void main(void){
      char a, b, c, d;
      printf("enter two characters(without space) press return key:\n");
      a = getchar();
      b = getchar();
     // putchar('\n');
      putchar(a);
      putchar(b);
     
      printf("\nenter two characters(without space) do not press return key:\n");
      c = getche();
      d = getche();
      // putchar('\n'); // the role of this statement is to change line
      putchar(c);
      putchar(d);
       getch();
      } 
