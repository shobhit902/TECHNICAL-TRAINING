#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int pass = 0;
    for(int i=0; i<n-1; i++) {
        int swapped = 0;
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j]; arr[j] = arr[j+1]; arr[j+1] = temp;
                swapped = 1;
            }
        }
        pass++;
        if(!swapped) break;
    }
    printf("Sorted array: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\nPasses taken: %d\n", pass);
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    bubbleSort(arr, n);

    return 0;
}
