#include <stdio.h>

int main() {
    int n, key, count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Enter number to search: ");
    scanf("%d", &key);
    
    printf("Positions: ");
    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            printf("%d ", i);
            count++;
        }
    }
    
    if(count)
        printf("\nThe number %d was found %d time(s).\n", key, count);
    else
        printf("\nThe number %d was not found.\n", key);
    
    return 0;
}