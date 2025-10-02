#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp[3];

    for(int i=0;i<3;i++) {
        printf("Enter name, id, salary for employee %d: ", i+1);
        scanf("%s %d %f", emp[i].name, &emp[i].id, &emp[i].salary);
    }

    printf("\nEmployee Details:\n");
    for(int i=0;i<3;i++)
        printf("Name: %s, ID: %d, Salary: %.2f\n", emp[i].name, emp[i].id, emp[i].salary);

    return 0;
}
