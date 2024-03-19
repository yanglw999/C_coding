#include<stdio.h>
int sumDigits(long n);
void main(void){
     int s;
     s = sumDigits(121453);
     printf("the sum of digits: %d;\n", s);
     
getch();
}
int sumDigits(long n){
    int sum = 0, remainder;
    while(n != 0){
           remainder = n % 10;
           n /= 10;
           sum += remainder; 
    }
    return sum;
}
