#include<stdio.h>

int getPentagonalNumber(int n);
#define MAX_N 100
void main(void){
     int i, num;
     for(i = 1; i <= MAX_N; i++){
           num = getPentagonalNumber(i);
           if(i%10 == 0){
                printf("%-8d \n", num);
           }else{
                 printf("%-8d ", num);
           }
     }
getch();
}
int getPentagonalNumber(int n){
    int m = n* (3 * n - 1) / 2;
    return m;
    }
