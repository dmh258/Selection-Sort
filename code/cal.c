#include<stdio.h>
#include<stdlib.h>

void selection_sort(int *arr, int arr_size);

void selection_sort(int *arr, int arr_size){
    int i,j;
    int smallest;
    int smallest_index;

    for(i = 0; i < arr_size -1 ; i++){
        smallest = arr[i];
        smallest_index = -1;
        
        for(j = i + 1; j < arr_size; j++){
            if(arr[j] < smallest){
                smallest = arr[j];
                smallest_index = j;
            }
        }
        if(smallest_index != -1){
        arr[smallest_index] = arr[i];
        arr[i] = smallest;
        }
    }
}