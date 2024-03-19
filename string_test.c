#include<stdio.h>
#include<string.h>
void main(void){
    char a, bb[4], cc[100], dd[100];
    FILE *outfile;
   outfile = fopen("strout.txt","w");
    printf("------------initiation------------\n");
    a = 'g';
    bb[0] ='d';
    bb[1] ='o';
    bb[2]= 'g';
    bb[3]='\0';
    strcpy(cc,"this is a string constant, also called a string literal.");
    strcpy(dd, cc);
    printf("printf printed the str cc: %s\n",cc);
    printf("puts printed the str dd: ");
    puts(dd);
    printf("\n"); // this statement is not needed, since str bb has a \0 at the end
    fprintf(outfile,"fprintf printed str dd: %s\n", dd);// write into file
    fprintf(outfile, "fputs printed the str dd: ");// write into file
    fputs(dd, outfile);
    fprintf(outfile, "\nbb: "); // write into file
    fputs(bb, outfile);// differs from puts(), it does not print a \0, 
    puts(bb); // str bb has a \0 at the end, puts() will automatically change the line after print the str since it meets the blank char
    fclose(outfile);



}