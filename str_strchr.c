#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main(void){
    char* s = "hello";
    char *p1 = strchr(s,'l'); // return a pointer
    char *p2 = strrchr(s, 'l');
    printf("%s\n", p1);
    printf("%s\n", p2);
    
    char c = *p1; // value of *p1 is l, now store 1 in var c
    printf("%c\n", c);
    *p1 = '\0';  // ?????   problem is here                  // replace 'l' with '\0', now s -> he\0lo
    printf("*p1 = %c\n", *p1);
    char* t = (char*)malloc(strlen(s) + 1);
    strcpy(t,s); // it only copies he to t
    printf("%s\n", t);
    *p1 = c;

    free(t);
}