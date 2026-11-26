#include <stdio.h>

void swap(int *a, int *b) {
    int tmp = *a;   
    *a = *b;        
    *b = tmp;
}


void minMax(int arr[], int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}


int main() {
    int a = 5;
    int b = 4;
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int smallest, largest; 
    swap(&a, &b);
    printf("%d %d\n", a, b);
    minMax(arr, size, &smallest, &largest);
    printf("min = %d, max = %d\n", smallest, largest);
    return 0;
}