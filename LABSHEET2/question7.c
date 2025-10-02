#include <stdio.h>

typedef struct {
    int roll;
    int marks;
} Student;

void selectionSort(Student arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int min_idx = i;
        for(int j=i+1; j<n; j++)
            if(arr[j].marks < arr[min_idx].marks)
                min_idx = j;
        // Swap
        Student temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    Student arr[n];
    printf("Enter roll and marks:\n");
    for(int i=0; i<n; i++)
        scanf("%d %d", &arr[i].roll, &arr[i].marks);

    selectionSort(arr, n);

    printf("Sorted students (roll marks):\n");
    for(int i=0; i<n; i++)
        printf("%d %d\n", arr[i].roll, arr[i].marks);

    printf("Check stability manually: if two students have same marks, order may change.\n");
    return 0;
}
