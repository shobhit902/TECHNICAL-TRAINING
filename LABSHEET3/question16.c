#include <stdio.h>

typedef union {
    int i;
    float f;
} MyUnion;

typedef struct {
    char name[20];
    MyUnion data;
} MyStruct;

int main() {
    MyStruct s;
    strcpy(s.name, "Example");
    s.data.i = 10;
    printf("%s -> i: %d\n", s.name, s.data.i);

    s.data.f = 3.14;
    printf("%s -> f: %.2f (i overwritten)\n", s.name, s.data.f);

    return 0;
}
