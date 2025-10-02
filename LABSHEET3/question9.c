#include <stdio.h>

void modify(int *x) {
    *x = 42;
}

int main() {
    int num = 10;
    printf("Before: %d\n", num);
    modify(&num);
    printf("After: %d\n", num);
    return 0;
}
