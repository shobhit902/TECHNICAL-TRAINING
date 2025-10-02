#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, steps = 0;
    while(low <= high) {
        steps++;
        int mid = (low + high) / 2;
        if(arr[mid] == key) break;
        else if(arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return steps;
}

int interpolationSearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, steps = 0;
    while(low <= high && key >= arr[low] && key <= arr[high]) {
        steps++;
        int pos = low + ((double)(high - low) / (arr[high] - arr[low])) * (key - arr[low]);
        if(arr[pos] == key) break;
        else if(arr[pos] < key) low = pos + 1;
        else high = pos - 1;
    }
    return steps;
}

int main() {
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter uniformly spaced sorted array:\n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number to search: ");
    scanf("%d", &key);

    int bSteps = binarySearch(arr, n, key);
    int iSteps = interpolationSearch(arr, n, key);

    printf("Binary Search steps: %d\n", bSteps);
    printf("Interpolation Search steps: %d\n", iSteps);

    return 0;
}
