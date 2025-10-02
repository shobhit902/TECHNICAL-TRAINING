#include <stdio.h>

typedef struct {
    int value;
    void (*func)(int*);
} MyStruct;

void increment(int *x) { (*x)++; }

int main() {
    MyStruct s;
    s.value = 5;
    s.func = increment;

    printf("Before: %d\n", s.value);
    s.func(&s.value);
    printf("After: %d\n", s.value);
    return 0;
}
