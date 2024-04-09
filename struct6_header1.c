#include "header1.h"
void main(void){
    int nums[N];
    int i, n = 0, m = 0;
    srand(10000);
    for(i = 0; i < N; i++){
        nums[i] = rand() % 100 + 1; // rand()%100 will generate the int from 0 to 99
    }                               // rand%101 will generate int from 0 to 100

    printf("the array before sort:\n");
    while(n < N){
        printf("%d ", nums[n]);
        n++;
    }

    bubbleSort(nums, N);

    printf("\nthe array after sort:\n");
    while(m < N){
        printf("%d ", nums[m]);
        m++;
    }
}
void bubbleSort(int arr[], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n -i; j++){
                if(arr[j-1] > arr[j]){
                    int temp = arr[j-1];
                    arr[j-1]= arr[j];
                    arr[j] = temp;
                }
        }
    }

}