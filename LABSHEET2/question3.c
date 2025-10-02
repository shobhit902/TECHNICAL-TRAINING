#include <stdio.h>
#include <math.h>
#include <time.h>

int linearSearch(int arr[], int n, int key) {
    for(int i=0; i<n; i++)
        if(arr[i] == key) return i;
    return -1;
}

int jumpSearch(int arr[], int n, int key) {
    int step = sqrt(n);
    int prev = 0;

    while(arr[(step < n ? step : n) - 1] < key) {
        prev = step;
        step += sqrt(n);
        if(prev >= n) return -1;
    }

    for(int i=prev; i< (step < n ? step : n); i++)
        if(arr[i] == key) return i;

    return -1;
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

    clock_t start, end;

    start = clock();
    int lIndex = linearSearch(arr, n, key);
    end = clock();
    printf("Linear Search took %.6f seconds\n", (double)(end - start)/CLOCKS_PER_SEC);

    start = clock();
    int jIndex = jumpSearch(arr, n, key);
    end = clock();
    printf("Jump Search took %.6f seconds\n", (double)(end - start)/CLOCKS_PER_SEC);

    printf("Linear Search index: %d\n", lIndex);
    printf("Jump Search index: %d\n", jIndex);

    return 0;
}
