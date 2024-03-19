#include<stdio.h>
#include<math.h>
int countDigits(long n);
long reverse(long n);
void main(void){
     long num = 123456;
     int i;
     long s = reverse(num);
     i = countDigits(num);
     printf("the number has %d digits\n", i);
     printf("%ld reversal num: %d\n",num, s);
     int flag = (num == s)? 1:0;
     printf("is the num Palindrome: %d", flag);

getch();
}
int countDigits(long n){
    int i=0;
    while(n != 0){
       n /= 10;
        i++;        
    }
    return i;
}
long reverse(long n){
     int i = countDigits(n) - 1;
     long sum = 0;
     while(n != 0){
        int r = n%10;
        n /= 10;
        sum += r * pow(10, i--);
     }
     return sum;
}



