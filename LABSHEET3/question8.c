#include <stdio.h>

int maxValue(int arr[], int n) {
    int max = arr[0];
    for(int i=1;i<n;i++)
        if(arr[i] > max) max = arr[i];
    return max;
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    printf("Maximum value: %d\n", maxValue(arr, 5));
    return 0;
}
