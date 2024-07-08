#include<stdio.h>

void main(void){
     int option;
     printf("please type 1, 2 or 3:\n" "1: breakfast\n""2: lunch\n" "3: dinner\n");
     scanf("%d", &option);
     switch(option){
           case 1: printf("order breakfast;\n"); break;
           case 2: printf("lunch!\n"); break;
           case 3: printf("good evening\n""dinner!\n"); break;

           default: printf("not hungry.\n");
     }

     for(int i = 0; i < 5; i++){
            printf("try this\n");
      }
             
}
