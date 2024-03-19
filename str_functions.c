#include<stdio.h>
#include<string.h>
void main(void){
    char a[40], b[3][60], c[4][100], d[50],e[30];
    int i;
    FILE *input;
    FILE *output;
    input = fopen("str_in.txt","r");// input file and output file are different in the file name type
    output = fopen("str_out","w"); // str_out file will be created by system automatically
// method 1
    printf("Enter a line of text for a[]: \n");
    gets(a); // read the text from keyboard until \n
    puts(a);

    printf("Type 3 lines for b[][] and press return at the end of each one\n");
    for(i = 0; i < 3; i++){
        gets(b[i]);        puts(b[i]);
    }

// method 2
    printf("we will read into c[][] from a file\n");
    for(i =0; i < 4; i++){
        fgets(c[i], 100, input);
        puts(c[i]);
        fputs(c[i], output);
    }

// method 3
    printf("enter a line of text for d[] and press return\n");
    scanf("%s", d); // scanf() is not good at string scanning, 
    puts(d);        //since it will stop once encountering a space instead of \n
    gets(e);
    printf("the rest of the text enter:\n");
    puts(e);
}