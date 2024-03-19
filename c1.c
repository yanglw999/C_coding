#include<stdio.h>
int main(){
    double foot, inch; 
    const double RATE = 30.48;
    printf("please the input your height feet and inch seperately like 5'7(5 7): ");
    //$$$ int -> %d(scanf & printf) but double  -> %lf
   
    scanf("%lf %lf", &foot, &inch); 
    printf("\nthe height is %.2lf cm",((foot + inch / 12.0) * RATE));
    
    //getch();
    return 0;
    }

