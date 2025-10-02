#include <stdio.h>

int* largest(int arr[], int n) {
    int *max = &arr[0];
    for(int i=1;i<n;i++)
        if(arr[i] > *max) max = &arr[i];
    return max;
}

int main() {
    int arr[] = {3, 7, 1, 9, 5};
    int *ptr = largest(arr, 5);
    printf("Largest element: %d\n", *ptr);
    return 0;
}
