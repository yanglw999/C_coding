#include<stdio.h>
void sort(double num[], int n_ele);
void bubble_sort(double list[], int list_size ); 

int main(){
    double list[] = {0, 5, -2,0.5,7,-9,-6,5.3,4.7,9.5,12,81,7.9,-8.3,5.6 };
    double list2[] = {6,5,4,3,2,1,0};
    sort(list,15);
    bubble_sort(list2,7);
    
    int i, j;
    for(i = 0; i < 15; i++){
          printf("%.1lf ", list[i]);    
    }
    printf("\n--------bubble sort---------\n");
    for(j = 0; j < 7; j++){
          printf("%.1lf ", list2[j]);    
    }
    getchar();
    return 0;
}
// exchange maximum sort
void sort(double num[], int n_ele){
     //double num0[] = num;
     int i, j;
     for(i = 0; i < n_ele; i++){           
           for(j = i+1; j< n_ele; j++){
                double min = num[i];
                if(num[i] > num[j]){
                     num[i] = num[j];
                     num[j] = min;
                } 
           }
     }
}
void bubble_sort(double list[], int list_size ){
     int needNextPass = 1;
     int k, i;
     // maximum size -1 times swap
     for(k = 1; k < list_size && needNextPass == 1; k++){
           needNextPass = 0;
           for(i = 0; i < list_size - k; i++){
                 if(list[i] > list[i+1]){
                 double temp = list[i+1];
                 list[i+1] = list[i];
                 list[i] = temp;
                 needNextPass = 1;
                 }           
           }
     }
}
