#include <stdio.h>

union Number {
    int i;
    float f;
};

int main() {
    union Number num;
    num.i = 10;
    printf("Integer: %d\n", num.i);

    num.f = 3.14;
    printf("Float: %.2f\n", num.f);
    printf("Integer after float assignment: %d (overwritten)\n", num.i);

    return 0;
}
