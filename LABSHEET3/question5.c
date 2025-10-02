#include <stdio.h>

void swap(int a, int b) {
    int temp = a; a = b; b = temp;
}

int main() {
    int x = 5, y = 10;
    swap(x, y);
    printf("After swap (call by value): x=%d y=%d\n", x, y);
    // Swap fails because only copies of x and y were swapped
    return 0;
}
