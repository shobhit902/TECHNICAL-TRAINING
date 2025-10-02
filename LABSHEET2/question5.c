#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int exponentialSearch(int arr[], int n, int key) {
    if(arr[0] == key) return 0;

    int i = 1;
    while(i < n && arr[i] <= key)
        i *= 2;

    return binarySearch(arr, i/2, (i<n ? i : n-1), key);
}

int main() {
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted array elements:\n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &key);

    int index = exponentialSearch(arr, n, key);
    if(index != -1)
        printf("Number found at index %d\n", index);
    else
        printf("Number not found\n");

    return 0;
}
