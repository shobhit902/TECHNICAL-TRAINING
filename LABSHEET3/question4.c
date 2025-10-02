#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3, cols = 4;
    int **arr = (int**)malloc(rows * sizeof(int*));
    for(int i=0;i<rows;i++)
        arr[i] = (int*)malloc(cols * sizeof(int));

    // Input values
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            arr[i][j] = i*cols + j + 1;

    // Display
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    // Free memory
    for(int i=0;i<rows;i++) free(arr[i]);
    free(arr);

    return 0;
}
