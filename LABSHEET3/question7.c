#include <stdio.h>

void helper() {
    printf("Helper function called\n");
}

void outer(void (*func)()) {
    printf("Outer function\n");
    func(); // call nested
}

int main() {
    outer(helper);
    return 0;
}
