#include "array_funcs.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("-- print_array --\n");
    
    srand(time(NULL));
    
    int arr[10];
    
    int count;
    for (count = 0; count < 10; count++) {
        int random = rand();
        arr[count] = random;
    }
    
    print_array(arr, 10);
    
    printf("\n-- get_average --\nArray 0: ");
    
    int arr_0[4] = {1, 2, 3, 4};
    print_array(arr_0, 4);
    printf("Average of array 0: %d\n\n", get_average(arr_0, 4));
    
    int arr_1[3] = {0, 0, 0};
    printf("Array 1: ");
    print_array(arr_1, 3);
    printf("Average of array 1: %d\n", get_average(arr_1, 3));
    
    printf("\n-- copy_array --\nArray 0: ");
    
    int arr_2[10];
    int arr_3[10];
    
    for (count = 0; count < 10; count++) {
        arr_2[count] = rand();
        arr_3[count] = rand();
    }
    
    print_array(arr_2, 10);
    
    printf("Array 1: ");
    print_array(arr_3, 10);
    
    copy_array(arr_2, arr_3, 10);
    
    printf("\nPost-copy array 1: ");
    print_array(arr_3, 10);
}


