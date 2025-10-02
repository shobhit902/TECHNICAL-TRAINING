#include <stdio.h>

void insertionSort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int key = arr[i];
        int j = i - 1;
        printf("Pick element %d\n", key);

        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;

        printf("Array now: ");
        for(int k=0; k<n; k++)
            printf("%d ", arr[k]);
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    insertionSort(arr, n);
    return 0;
}
