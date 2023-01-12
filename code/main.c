#include<stdio.h>
#include<stdlib.h>

int main(){

    int *arr;
    int arr_size;
    int *arr_selection_sort;
    int i;

    printf("Enter the size of array : ");
    scanf("%d", &arr_size);

    arr = (int*)malloc(sizeof(int) * arr_size);

    enter_val(arr, arr_size);
    arr_selection_sort = selection_sort(arr, arr_size);
    print_arr(arr, arr_size);

    return 0;
}