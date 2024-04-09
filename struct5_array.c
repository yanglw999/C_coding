#include<stdio.h>
#include<string.h>
#define N 3
struct coord{
    double x;
    double y;
};
void bubbleSort(struct coord a[N]);
void main(void){
    struct coord ele1, ele2, ele3;
    struct coord arr[3];
    ele1.x = 3 ;
    ele1.y = 2 ;
    arr[0] = ele1;

    ele2.x = 2;
    ele2.y = 1.5;
    arr[1] = ele2;

    ele3.x = 1.7;
    ele3.y = 1;
    arr[2] = ele3;
    int i;
  /*  for(i = 0; i < N; i++){
        struct coord ele

    }*/
    bubbleSort(arr); //arr stands for the address of first element
    int n = 0;
    while(n < N){
        printf("%.2lf, ", arr[n].x);
        printf("%.2lf, ", arr[n].y);
        printf("\n");
        n++;
    }  
}
void bubbleSort(struct coord a[N]){
    int i,j;
    for(i = 0; i < N; i++){

        for(j = 0; j < N - i; j++){
            if (a[j-1].x > a[j].x){
                struct coord temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
        }
    }
}