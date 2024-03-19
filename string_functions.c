#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main(void){
    char cc, long_str[50], many_lines[70];
    int occupied, reserved, buffer_size;
    strcpy(long_str, "this is a complete sentence.");
    strcpy(many_lines, "this sentence \n covers two lines");
    printf("[%40.10s]\n", long_str);
    occupied = (int)strlen(long_str);
    reserved = sizeof(many_lines)/ sizeof(char);
     buffer_size = BUFSIZ;
     printf("The buffer size is:%d\n",buffer_size);
     //puts(buffer_size);
    printf("the length of long_str: %d\n", occupied);
    printf("the max capacity of many_lines array: %d\n", reserved);
   
    
}