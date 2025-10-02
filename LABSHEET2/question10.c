#include <stdio.h>

int comparisons = 0;

int partition(int arr[], int low, int high) {
    int pivot = arr[low]; // first element as pivot
    int i = low + 1, j = high, temp;

    while(1) {
        while(i <= high && arr[i] <= pivot) { i++; comparisons++; }
        while(arr[j] > pivot) { j--; comparisons++; }
        if(i < j) {
            temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
        } else break;
    }
    temp = arr[low]; arr[low] = arr[j]; arr[j] = temp;
    return j;
}

void quickSort(int arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    comparisons = 0;
    quickSort(arr, 0, n-1);

    printf("Sorted array: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\nComparisons: %d\n", comparisons);

    printf("Note: Sorted input array causes worst-case behavior due to first-element pivot.\n");
    return 0;
}
