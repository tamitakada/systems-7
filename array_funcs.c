#include <stdio.h>

void print_array(int *arr, int len) {
    printf("[ ");
    
    int count;
    for (count = 0; count < len; count++) {
        printf("%d ", arr[count]);
    }
    
    printf("]\n");
}

int get_average(int *arr, int len) {
    if (len > 0) {
        int sum = 0;
        int count;
        
        for (count = 0; count < len; count++) {
            sum += arr[count];
        }
        
        return (sum / len);
    } else return 0;
}

void copy_array(int *arr_0, int *arr_1, int len) {
    int count;
    for (count = 0; count < len; count++) {
        arr_1[count] = arr_0[count];
    }
}
