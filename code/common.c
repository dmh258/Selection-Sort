#include<stdio.h>
#include<stdlib.h>

void print_arr(int *arr, int arr_size);
void enter_val(int *arr, int arr_size);

void enter_val(int *arr, int arr_size){
    int i;
    printf("Enter value of array \n");
    for(i = 0; i < arr_size; i++){
        scanf("%d", &arr[i]);
    }
}


void print_arr(int *arr, int arr_size){
    int i;

    printf("arr is\n");
    for(i = 0; i < arr_size; i++){
        printf("%d \t", arr[i]);
    }
    printf("\n");
}