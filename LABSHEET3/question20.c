#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int marks;
} Student;

int main() {
    Student s[3] = { {"Alice",85},{"Bob",92},{"Charlie",85} };
    int n=3;

    // Bubble sort descending
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(s[j].marks < s[j+1].marks){
                Student temp = s[j]; s[j]=s[j+1]; s[j+1]=temp;
            }

    printf("Students sorted by marks descending:\n");
    for(int i=0;i<n;i++)
        printf("%s %d\n", s[i].name, s[i].marks);

    return 0;
}
