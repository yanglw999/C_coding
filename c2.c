#include<stdio.h> 
void main(void){
     const int BENCHMARK = 32;
     double fahr, celsius;
     int floor, ceiling, step;
     floor = 0;
     ceiling = 300;
     step = 20;
     fahr = floor;
     printf("  fahr\t\tcelsius\n");
     while(fahr <= ceiling){
                celsius = 5 * (fahr - BENCHMARK) / 9.0;
                printf("  %.1f\t\t%.2f\n", fahr, celsius);
                fahr += step;
             }
          //   getch();
     }
