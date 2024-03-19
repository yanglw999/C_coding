#include<stdio.h>
#include<string.h>

enum boolean {false, true};
enum boolean compare(int m, int n){
    if(m - n == 0) return true;
    return false;

}
void main(void){
    char* weekdays[7] ={"Sun", "Mon", "Tue", "Wed", "Thu","Fri","Sat"}; // pointer array
    int dayOfWeek = 4;
    printf("the day %d is %s;\n",dayOfWeek,weekdays[dayOfWeek -1]);

    char* binary[2] ={"false", "true"};

    int m = 3;
    int n = 5;

    printf("%d is equal to %d?: %s\n", m, n, binary[compare(m,n)]);
   

}