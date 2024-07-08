#include<stdio.h>
#include<string.h>
#define ROW 3
const int COLS = 15;
//#define COLS 15
void main(void){
    char aa[2][90], bb[ROW][COLS];
    int i, occupied, reserved, length;
    FILE *outfile;
    outfile = fopen("outfile2", "w");

    printf("--------------section1-----initialising--------------\n");

    strcpy(aa[0], "The aa[][] array ");
    strcpy(aa[1], "has 2 strings.\n");
    strcpy(bb[0],"The bb array ");
    strcpy(bb[1], "has ");
    strcpy(bb[2], "3 strings.");

    printf("---------------section 2 -printing --------------------\n");
    for( i = 0; i < 2; i++) printf("%s",aa[i]); printf("\n");
    for( i = 0; i < ROW; i++) puts(bb[i]); printf("\n");
    // puts() can change lines but fputs() does not have the feature
     for( i = 0; i < ROW; i++) fputs(bb[i], outfile);
     reserved = sizeof(bb[0]) / sizeof(char);
     // sizeof(bb) will return the full capacity of 1-d bb[][]
     occupied = (int)strlen(bb[0]);
    
     printf("bb[0] capacity(elements) = %d;\nThe length(by elements) of string in bb[0]: %d;\n" 
     , reserved, occupied);
     printf("\n");
     // length = strlen(bb[ROW][COLS]);  // incorrect, can not get the total lenght of bb[][]
     length = (int)strlen(bb);// get a wrong answer, we can not directly get the length of 2-D array by strlen()
     printf("The (incorrect) length of bb[][](element) = %d;\n",length);
     printf("The capacity of bb[][](element) = %d;\n",sizeof(bb)/sizeof(bb[0][0]));
     printf("The row of bb[][](element) = %d;\n",sizeof(bb)/sizeof(bb[0]));

}