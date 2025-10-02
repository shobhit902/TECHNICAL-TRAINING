#include <stdio.h>

int sum2D(int arr[][3], int rows) {
    int sum=0;
    for(int i=0;i<rows;i++)
        for(int j=0;j<3;j++)
            sum += arr[i][j];
    return sum;
}

int main() {
    int arr[2][3] = {{1,2,3},{4,5,6}};
    printf("Sum of elements: %d\n", sum2D(arr,2));
    return 0;
}
