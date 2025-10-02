#include <stdio.h>

int main() {
    char *names[5];
    char buffer[50];

    for(int i=0;i<5;i++) {
        printf("Enter name %d: ", i+1);
        scanf("%s", buffer);
        names[i] = strdup(buffer); // allocate memory for each string
    }

    printf("Names are: ");
    for(int i=0;i<5;i++)
        printf("%s ", names[i]);
    printf("\n");

    for(int i=0;i<5;i++) free(names[i]);
    return 0;
}
